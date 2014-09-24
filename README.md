Firmware
========

In order to give our 3D Printer the intelegence needed to make awesome objects, you need to upload the latest firmware. We currently give support to BCN3D+ firmwares. The **standard** and the **dual extruder**.

- Firmwares
    + BCN3D
    + BCN3D+
    + BCN3D+ Dual Extruder
    
Even thought we don't support older firmwares, you are still able to download the BCN3D version for all those firsts BCN3D out in the wild.


---
>Before uploading a new firmware be sure to follow all the steps and indications. Also remember to install the U8glib in you Arduino libraries!

---

Changing the Firmware
---
In order to change the firmware you need the following:

1. USB Cable
2. Arduino IDE with u8glib library*
3. Firmware Code

The process:

1. Switch off the mains
2. Plug the USB cable to the side of the printer. Your computer should detect it and give it a port. 
3. Open the Arduino IDE and open the arduino file (`.ino`) located in the firmware directory.
4. In the Arduino programm --> Tools --> Board --> Arduino Mega2560/ADK. In the same tools menu select your SERIAL PORT.
5. Click the *Right Arrow icon* who says **Load**
6. Just wait for the progress bar to finish and the printer will reset itself. Then you can unplug the USB cable and switch back on the printer and enjoy.

###Libraries needed
In order to install new libraries to the Arduino follow the next link.

[Install Arduino Libraries](http://arduino.cc/en/Guide/Libraries)

And here you can find the u8glib

[u8glib Arduino library](http://dl.bintray.com/olikraus/u8glib/u8glib_arduino_v1.16.zip)
