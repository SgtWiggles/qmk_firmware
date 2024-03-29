# MCU name
MCU = atmega32u4

# Processor frequency
F_CPU = 8000000

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite     # Enable Bootmagic Lite
ENCODER_ENABLE = yes
MOUSEKEY_ENABLE  = no       # Mouse keys
EXTRAKEY_ENABLE  = no       # Audio control and System control
CONSOLE_ENABLE  = yes       # Console for debug
COMMAND_ENABLE  = yes       # Commands for debug and configuration
SLEEP_LED_ENABLE  = no      # Breathing sleep LED during USB suspend
NKRO_ENABLE  = yes          # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE  = no
AUDIO_ENABLE  = no          # This can be enabled if a speaker is connected to the expansion port. Not compatible with RGBLIGHT below
RGBLIGHT_ENABLE  = no       # This can be enabled if a ws2812 strip is connected to the expansion port.

BLUETOOTH_ENABLE = yes
BLUETOOTH_DRIVER = AdafruitBLE
