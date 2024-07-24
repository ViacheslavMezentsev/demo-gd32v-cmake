cmake_minimum_required(VERSION 3.19)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} Include)

target_sources(${PROJECT_NAME} PRIVATE
    Source/gd32vf103_adc.c
    Source/gd32vf103_bkp.c
    Source/gd32vf103_can.c
    Source/gd32vf103_crc.c
    Source/gd32vf103_dac.c
    Source/gd32vf103_dbg.c
    Source/gd32vf103_dma.c
    Source/gd32vf103_eclic.c
    Source/gd32vf103_exmc.c
    Source/gd32vf103_exti.c
    Source/gd32vf103_fmc.c
    Source/gd32vf103_fwdgt.c
    Source/gd32vf103_gpio.c
    Source/gd32vf103_i2c.c
    Source/gd32vf103_pmu.c
    Source/gd32vf103_rcu.c
    Source/gd32vf103_rtc.c
    Source/gd32vf103_spi.c
    Source/gd32vf103_timer.c
    Source/gd32vf103_usart.c
    Source/gd32vf103_wwdgt.c
    system_gd32vf103.c
)
