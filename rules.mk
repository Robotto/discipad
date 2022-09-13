# MCU name
MCU = atmega328p

# Bootloader selection
BOOTLOADER = usbasploader

#https://github.com/qmk/qmk_firmware/blob/master/docs/feature_combo.md
COMBO_ENABLE = yes


# Build Options
#   change yes to no to disable
#
#KEY_OVERRIDE_ENABLE = yes #https://github.com/qmk/qmk_firmware/blob/master/docs/feature_key_overrides.md (for alt+4 -> alt+F4 and super+c -> calc)

BOOTMAGIC_ENABLE = lite     # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
