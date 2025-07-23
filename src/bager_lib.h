#pragma once

void init_led(short pin);
void turn_led_on_off(short pin, short on_off);

void init_motors(short motor_one, short motor_two);
void set_direction(short motor_one, short motor_two, short direction);
void move_motors(short ena_pin);
