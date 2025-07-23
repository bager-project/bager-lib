#include "hardware/pwm.h"
#include "pico/stdlib.h"

#include "bager_lib.h"

void setup_pwm(uint gpio, uint16_t duty_cycle) 
{
    gpio_set_function(gpio, GPIO_FUNC_PWM);

    uint slice = pwm_gpio_to_slice_num(gpio);
    pwm_set_wrap(slice, 65535);  // Max count

    pwm_set_chan_level(slice, pwm_gpio_to_channel(gpio), duty_cycle);
    pwm_set_enabled(slice, true);
}

void init_led(short pin)
{
    gpio_init(pin);
    gpio_set_dir(pin, GPIO_OUT);
}

void turn_led_on_off(short pin, short on_off)
{
    gpio_put(pin, on_off);
}

void init_motors(short motor_one, short motor_two)
{
    gpio_init(motor_one);
    gpio_set_dir(motor_one, GPIO_OUT);

    gpio_init(motor_two);
    gpio_set_dir(motor_two, GPIO_OUT);
}

void set_direction(short motor_one, short motor_two, short direction)
{
    if (direction == 1) // forward
    {
        gpio_put(motor_one, 1);
        gpio_put(motor_two, 0);
    }
}

void move_motors(short ena_pin)
{
    // setup_pwm(ena_pin, 65535);  // 100% duty for max RPM
    setup_pwm(ena_pin, 43690); // 6V
}
