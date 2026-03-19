pub struct SerialPort {
    pub port_name: String,
    pub baud_rate: u32,
}

impl SerialPort {
    pub fn new(port_name: &str, baud_rate: u32) -> Self {
        SerialPort {
            port_name: port_name.to_string(),
            baud_rate,
        }
    }

    pub fn open(&self) -> Result<(), String> {
        // Placeholder for opening a serial port
        println!("Opening serial port {} at {} baud", self.port_name, self.baud_rate);
        Ok(())
    }

    pub fn write(&self, data: &[u8]) -> Result<usize, String> {
        // Placeholder for writing to a serial port
        Ok(data.len())
    }

    pub fn read(&self, buffer: &mut [u8]) -> Result<usize, String> {
        // Placeholder for reading from a serial port
        Ok(0)
    }
}
