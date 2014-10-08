/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega 2560 or Mega ADK, Platform=avr, Package=arduino
*/

#define __AVR_ATmega2560__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}


#include "C:\Program Files\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\Program Files\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\BCN3D_v30.ino"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\Configuration.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\ConfigurationStore.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\ConfigurationStore.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\Configuration_adv.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\DOGMbitmaps.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\Hysteresis.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\Hysteresis.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\LiquidCrystalRus.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\LiquidCrystalRus.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\Marlin.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\MarlinSerial.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\MarlinSerial.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\Marlin_main.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\Sd2Card.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\Sd2Card.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\Sd2PinMap.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\SdBaseFile.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\SdBaseFile.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\SdFatConfig.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\SdFatStructs.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\SdFatUtil.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\SdFatUtil.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\SdFile.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\SdFile.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\SdInfo.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\SdVolume.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\SdVolume.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\Servo.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\Servo.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\cardreader.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\cardreader.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\dogm_font_data_marlin.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\dogm_lcd_implementation.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\fastio.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\language.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\motion_control.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\motion_control.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\pins.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\planner.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\planner.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\speed_lookuptable.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\stepper.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\stepper.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\temperature.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\temperature.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\thermistortables.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\ultralcd.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\ultralcd.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\ultralcd_implementation_hitachi_HD44780.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\ultralcd_st7920_u8glib_rrd.h"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\watchdog.cpp"
#include "C:\Users\reprap\Documents\GitHub\Firmwares\BCN3D+\BCN3D_v30\watchdog.h"
