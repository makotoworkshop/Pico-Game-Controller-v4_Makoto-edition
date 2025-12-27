# Pico-Game-Controller Makoto-edition

Code for a keyboard or game controller using a Raspberry Pi Pico. Capable of handling 10 buttons, 7 LEDs, 1 WS2812B RGB strip, and 2 encoders.
For Sound Voltex Games.

- Demo of this firmware running on Pocket-SDVX-Pico-Makoto_edition, https://peertube.makotoworkshop.org/w/eBVCh1rnm1xog55nYfo6JZ
- Complete hardware build described here : https://burogu.makotoworkshop.org/index.php?pages/Menu_pocket_sdvx
- Hardware sources files also here : https://github.com/makotoworkshop/Pocket-SDVX-Pico-Makoto_edition



How to Use:

- For basic flashing, see README in build_uf2
- Otherwise, setup the C++ environment for the Pi Pico as per https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf
- Build pico-examples directory once to ensure all the tinyusb and other libraries are there. You might have to move the pico-sdk folder into pico-examples/build for it to play nice.
- Move pico-sdk back outside to the same level directory as Pico-Game-Controller.
- Open Pico-Game-Controller in VSCode(assuming this is setup for the Pi Pico) and see if everything builds.
- Tweakable parameters are in controller_config.h

Thanks to:

- Everyone in the Cons & Stuff Discord for providing near instant support to questions.
- https://github.com/hathach/tinyusb/tree/master/examples/device/hid_composite
- https://github.com/mdxtinkernick/pico_encoders for encoders which performed better than both interrupts and polling.
- My SE buddies who helped come up with a solution for the encoder rollover edge case scenario.
- https://github.com/Drewol/rp2040-gamecon for usb gamepad descriptor info.
- https://github.com/veroxzik/arduino-konami-spoof for konami spoof usb descriptor info.
- https://github.com/veroxzik/roxy-firmware for nkro descriptor and logic info.
- KyubiFox for bringing clkdiv to my attention for encoder debouncing
- 4yn for turbocharger lighting
- SushiRemover for alternate debounce mode
