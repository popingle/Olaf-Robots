#include "motor_protocol.h"
#include <string.h>

#define PROTOCOL_HEADER 0xFF
#define PROTOCOL_FOOTER 0xFE

int encode_motor_command(const MotorCommand* cmd, uint8_t* buffer, uint16_t* len) {
    if (!cmd || !buffer || !len) return -1;

    buffer[0] = PROTOCOL_HEADER;
    buffer[1] = cmd->id;
    buffer[2] = (cmd->position >> 8) & 0xFF;
    buffer[3] = cmd->position & 0xFF;
    buffer[4] = (cmd->speed >> 8) & 0xFF;
    buffer[5] = cmd->speed & 0xFF;
    buffer[6] = cmd->torque_limit;
    
    uint8_t checksum = 0;
    for (int i = 1; i < 7; i++) {
        checksum += buffer[i];
    }
    buffer[7] = checksum;
    buffer[8] = PROTOCOL_FOOTER;
    
    *len = 9;
    return 0;
}

int decode_motor_status(const uint8_t* buffer, uint16_t len, MotorStatus* status) {
    if (!buffer || !status || len < 9) return -1;
    if (buffer[0] != PROTOCOL_HEADER || buffer[8] != PROTOCOL_FOOTER) return -2;

    uint8_t checksum = 0;
    for (int i = 1; i < 7; i++) {
        checksum += buffer[i];
    }
    if (checksum != buffer[7]) return -3;

    status->id = buffer[1];
    status->current_position = (buffer[2] << 8) | buffer[3];
    status->current_speed = (buffer[4] << 8) | buffer[5];
    status->load = buffer[6]; // Simplified load mapping
    status->temperature = 0; // Temperature not in this packet version

    return 0;
}
