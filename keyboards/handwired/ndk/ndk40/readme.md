# handwired/ndk/ndk40

![handwired/ndk/ndk40](imgur.com image replace me!)

40-ish% staggered handwired keyboard with a bottom-row designed for those who use their right thumb for space. This allows the left thumb to access to 1u keys for Lower and Raise layers. 

## Keycap Support
I designed this to be able to be used with cherry profiles that have commonly available delete, enter, esc 40s support. If you are looking at cherry keycaps this is what you will need:
* Q row: 1u Eec, 1.75u Backspace
* A row: 1.25u Tab, 1.5u Enter
* Z row: 1.75u Shift

In addition, the 3d printed case files have room for a battery if you want to go wireless with a nice!nano. you can find ZMK [repo here](https://github.com/itskevin-zz/zmk-config-ndk40).

* Keyboard Maintainer: [Kevin](https://github.com/itskevin-zz)
* Hardware Supported: handwired, ATmega32u4
* Hardware Availability: to be added

Make example for this keyboard (after setting up your build environment):

    make handwired/ndk/ndk40:default

Flashing example for this keyboard:

    make handwired/ndk/ndk40:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
