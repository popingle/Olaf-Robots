#ifndef Olaf_Robots_MOTOR_PROTOCOL_H
#define Olaf_Robots_MOTOR_PROTOCOL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uint8_t id;
    uint16_t position;
    uint16_t speed;
    uint8_t torque_limit;
} MotorCommand;

typedef struct {
    uint8_t id;
    uint16_t current_position;
    uint16_t current_speed;
    uint16_t load;
    uint8_t temperature;
} MotorStatus;

int encode_motor_command(const MotorCommand* cmd, uint8_t* buffer, uint16_t* len);
int decode_motor_status(const uint8_t* buffer, uint16_t len, MotorStatus* status);

#ifdef __cplusplus
}
#endif

#endif // Olaf_Robots_MOTOR_PROTOCOL_H
