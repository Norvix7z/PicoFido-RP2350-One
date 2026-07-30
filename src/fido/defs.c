/*
 * This file is part of the Pico FIDO distribution (https://github.com/polhenarejos/pico-fido).
 * Copyright (c) 2022 Pol Henarejos.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include "picokeys.h"
#include "fido.h"
#include "version.h"

uint8_t PICO_PRODUCT = 2; // Pico FIDO
uint8_t PICO_VERSION_MAJOR = PICO_FIDO_VERSION_MAJOR;
uint8_t PICO_VERSION_MINOR = PICO_FIDO_VERSION_MINOR;

#ifdef CONFIG_PRESENCE_BUTTON_PIN
#undef CONFIG_PRESENCE_BUTTON_PIN
#endif
#define CONFIG_PRESENCE_BUTTON_PIN 45

#ifdef CONFIG_PRESENCE_BUTTON_ACTIVE_LOW
#undef CONFIG_PRESENCE_BUTTON_ACTIVE_LOW
#endif
#define CONFIG_PRESENCE_BUTTON_ACTIVE_LOW 1

#ifdef CONFIG_RGB_LED_PIN
#undef CONFIG_RGB_LED_PIN
#endif
#define CONFIG_RGB_LED_PIN 16

#ifdef CONFIG_RGB_LED_COUNT
#undef CONFIG_RGB_LED_COUNT
#endif
#define CONFIG_RGB_LED_COUNT 1

#ifdef CONFIG_LED_PIN
#undef CONFIG_LED_PIN
#endif
#define CONFIG_LED_PIN -1

