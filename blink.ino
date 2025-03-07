/*
 * Copyright (c) 2022 Marcel Licence
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Dieses Programm ist Freie Software: Sie k�nnen es unter den Bedingungen
 * der GNU General Public License, wie von der Free Software Foundation,
 * Version 3 der Lizenz oder (nach Ihrer Wahl) jeder neueren
 * ver�ffentlichten Version, weiter verteilen und/oder modifizieren.
 *
 * Dieses Programm wird in der Hoffnung bereitgestellt, dass es n�tzlich sein wird, jedoch
 * OHNE JEDE GEW�HR,; sogar ohne die implizite
 * Gew�hr der MARKTF�HIGKEIT oder EIGNUNG F�R EINEN BESTIMMTEN ZWECK.
 * Siehe die GNU General Public License f�r weitere Einzelheiten.
 *
 * Sie sollten eine Kopie der GNU General Public License zusammen mit diesem
 * Programm erhalten haben. Wenn nicht, siehe <https://www.gnu.org/licenses/>.
 */

/**
 * @file blink.ino
 * @author Marcel Licence
 * @date 12.05.2021
 *
 * @brief  this file includes a simple blink task implementation
 */


#ifdef BLINK_LED_PIN

inline
void Blink_Setup(void)
{
    pinMode(BLINK_LED_PIN, OUTPUT);
}

inline
void Blink_Process(void)
{
    static bool ledOn = true;
    if (ledOn)
    {
        digitalWrite(BLINK_LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    }
    else
    {
        digitalWrite(BLINK_LED_PIN, LOW);    // turn the LED off
    }
    ledOn = !ledOn;
}

void Blink_Pulse(uint8_t cnt)
{
    delay(500);
    for (int i = 0; i < cnt; i++)
    {
        digitalWrite(BLINK_LED_PIN, HIGH);
        delay(50);
        digitalWrite(BLINK_LED_PIN, LOW);
        delay(200);
    }
}

#endif

