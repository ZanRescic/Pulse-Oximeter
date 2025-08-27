# Pulse Oximeter

An embedded application for measuring and displaying heart rate and blood oxygen saturation (SpO₂) on the **STM32H750B Discovery Kit**. The system uses the MikroElektronika **Oximeter 5 Click (MAX30102)** sensor and a TouchGFX-based GUI.

## Features
- Initializes the MAX30102 sensor and gathers red/infrared samples.
- Calculates SpO₂ and heart rate.
- Sends calculated data to the GUI model, which updates the onscreen values and heart animation.
- TouchGFX UI with a start screen and a data screen for real-time readings.

## Build & Run
1. **Hardware**:  
   - STM32H750B Discovery Kit
   - Oximeter 5 Click wired to I2C4; compatible with mikroBUS sockets
2. **Build**:  
   - Open the project in **STM32CubeIDE** (default IDE) and build it.
3. **Flash**:  
   - Load the firmware using STM32CubeIDE or STM32CubeProgrammer.  
4. **Usage**:  
   - On boot, the device initializes the sensor, samples data, and transitions to the data screen.  
   - Heart rate and SpO₂ values update continuously on screen.
