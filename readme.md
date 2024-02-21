# Project Introduction

The project is an Espressif SDK-based sample project written in C and C++. It encompasses crucial components such as WiFi NVS, HTTP client-server functionality, and various sensor-related features like pressure, along with other HTML components. The primary objective is to serve as a foundation for extended projects, enabling the seamless extension of applications beyond the initial setup.

## Main Components

### 1. Env
The 'Env' component serves as the primary control center for the project. Its main purpose is to manage project configurations, making selections straightforward.

### 2. Sensor Component
This component acts as a template for designing sensor classes compatible with various sensor types, including temperature, pressure, RTC, etc. Currently, the BME680 sensor is both designed and integrated into the project directory.

### 3. HTTP Client Class
The HTTP client class simplifies the establishment of connections with any HTTP server, eliminating the need for direct interaction with lower-level ESP SDK APIs. By providing a URL, it handles connection setup and response parsing for the user.

### 4. HTTP Server
Designed for device composition, the HTTP server is versatile for generic purposes. Users can configure existing web servers by defining APIs tailored to their specific requirements.

### 5. WiFi Component
The 'WiFi' component is a generic module for WiFi control purposes. It provides comprehensive handling for both Station (STA) and Soft Access Point (SoftAP) modes. The runtime mode switchable, allowing for dynamic adaptation between HTTP client and server communication modes.

### 6. Utilities
This section includes parsing utilities for data parsing and response handling purposes.

## SDK and Git Requirements

Ensure that you have the following prerequisites installed:

- **Espressif SDK 4.4**
  - [Download and Installation Guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html)

- **Git**
  - [Download and Installation Guide](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git)

## Integration in Existing Apps

Various options are available for integrating components into existing projects. The component structure details can be found [here](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-guides/build-system.html). Alternatively, you can modify the main component's CMake and add desired files to the source (SRCS) or include (INCLUDE_DIRS) directories.

## How to Install

To integrate this project into your ESP32 environment, follow these steps:

1. Clone the repository to your local machine:

   ```bash
   git clone https://gitlab.com/epteck-pk/ept-teams/digital-bravo/ept-products/ept-libs/esp-idf/idf-cpp-template.git -b component/i2c

2. Build, flash, and monitor the code using the following command

```
  idf.py -p ${SERIAL_PORT_NAME} build flash monitor
``` 
