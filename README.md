# Arduino-Hotkeys

**CURRENT BUILD: UNFINISHED**

Short lil' personal project. Very dirty code. Uses 7 buttons (in my case microswitches), 3 as media keys, and 4 as hotkeys for desktop to make some tasks easier.

Currently only designed for Arduino UNO/MEGA R3, and because of hardware limitations and lack of code consolidation/simplification, it can only support up to 7 with LEDs, or 9 without LEDS or if you have a MEGA. I'm going to optimize a lot of the 16u2 code as that is the main limitation of the program.

**This project uses [NicoHood's HoodLoader2](https://github.com/NicoHood/HoodLoader2) bootloader and [HID-Project](https://github.com/NicoHood/HID) library. Great big thanks to him for his simply fantastic software!!**

As a result of that, you **must** first install HoodLoader2 onto your board. You can find out how [here.](https://github.com/NicoHood/HoodLoader2/wiki) **WARNING: Installing HoodLoader2 on your UNO/MEGA R3 is an almost irreversable action. Take caution, and decide whether or not to install it.**

Next, install the HID-Project library and board defenitions. You can find out how [here.](https://github.com/NicoHood/HID/wiki)

**NOTE: When uploading the sketches to your board, please upload 'Arduino-Hotkeys-IO' to the *IO MCU, a.k.a. the 328/328p*, and 'Arduino-Hotkeys-USB' to the *USB MCU, a.k.a. the 16u2*. It will not work if you do not uplaod it correctly!**