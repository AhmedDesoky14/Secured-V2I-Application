# Secured-V2I-Application

`Secured-V2I-Application` is two-way application to apply V2I communications technology using TCP/IP model and WiFi available technoolgy, designed and developed into 2 parts.
This application is part of the **Secured V2X Enabled Autoparking System Graduation Project**, mentored by **Valeo**.

First part, **V2I Server - Infrastructure** is run on STM32F4x micrcontroller based on STM HAL libraries. 

## Features
- Act as WiFi Access Point for vehiceles WiFi stations, using ESP8266 hardware module connected to STM32Fx via UART-based communications.
- Manage all incoming clients requests connected to the WiFi local network and exchange data with clients.
- Provide connected clients with different types of services.
- Support high level of security by using RSA cryptosystem and SHA256 hash algorithm for the exchanged messages.

## Components
- Cryptography stack files utilizing WolfSSL open-source crypto library functions.
- ESP8266 WiFi hardware module driver.
- V2I Server Manager -> Application module.

## External Dependencies
- WolfSSL open-source crypto library
- STM HAL libraries

---

Second part, **V2I Client - Vehicle** is installed and run on Raspbian, a Linux Debian distribution. running on Raspberry Pi microcontroller.

## Features
- Act as WiFi station using WiFi hardware on Raspberry Pi microcontroller to connect to Infrastructures Access Points.
- Request needded services such as parking requests and provide neccessary data.
- Support high level of security by using RSA cryptosystem and SHA256 hash algorithm for the exchanged messages.

## Components
- Cryptography stack files utilizing WolfSSL open-source crypto library functions.
- WiFi manager module to control Raspberry Pi WiFi hardware.
- TCP Client module that utilizes Unix sockets libraries for TCP.
- V2I Client -> Application module.

## External Dependencies
- WolfSSL open-source crypto library
- network manager for Linux

---

**All communications and data exchange are handled asynchronously using:**
- pthread library for Linux on Raspberry Pi
- Interrupts by ARM Cortex M4 NVIC on STM32F4x microcontrollers

---

**NOTE:** cryptography keys need to be configured. 
**Examples are provided**

---

**Authors:**
	Ahmed Desoky,
  	Omar Tolba,
   	Dina Hamed
	
**Emails:**
	ahmed0201150@gmail.com,
	omartolba004@gmail.com,
 	dina.hamed001@gmail.com
