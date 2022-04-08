# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = atmel-dfu

BOOTMAGIC_ENABLE = lite       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys (should be on YES)
EXTRAKEY_ENABLE = yes       # Audio control and System control should be on YES)
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
NKRO_ENABLE = yes            # USB Nkey Rollover (should be on YES)
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
TAP_DANCE_ENABLE = no
ENCODER_ENABLE = yes		# Encoder Enable (should be YES)
OLED_ENABLE = yes		# OLED Screen Enable
CONSOLE_ENABLE=no
COMMAND_ENABLE=yes
UNICODE_ENABLE=yes

EXTRAFLAGS += -flto 
