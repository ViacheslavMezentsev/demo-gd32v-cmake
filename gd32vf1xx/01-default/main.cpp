#include "gd32vf103.h"
#include "gd32vf103c_start.h"
#include "systick.h"

/**
 * \brief   Точка входа в программу.
 *
 */
int main()
{
    // Включаем тактирование порта.
    rcu_periph_clock_enable( RCU_GPIOA );
    rcu_periph_clock_enable( RCU_GPIOC );

    // Настраиваем вывод порта.
    gpio_init( GPIOA, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, GPIO_PIN_1 );    // зелёный
    gpio_init( GPIOA, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, GPIO_PIN_2 );    // синий
    gpio_init( GPIOC, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, GPIO_PIN_13 );   // красный

    // Установка начального состояния вывода порта.
    gpio_bit_set( GPIOA, GPIO_PIN_1 );    // зелёный
    gpio_bit_set( GPIOA, GPIO_PIN_2 );    // синий
    gpio_bit_set( GPIOC, GPIO_PIN_13 );   // красный

    while ( 1 )
    {
        // Синхронная задержка 500 мс.
        delay_1ms( 500 );

        // Моргаем светодиодом.
        gpio_bit_write( GPIOA, GPIO_PIN_1, ( bit_status ) ( 1 - gpio_input_bit_get( GPIOA, GPIO_PIN_1 ) ) );

        // Синхронная задержка 500 мс.
        delay_1ms( 500 );
    }
}
