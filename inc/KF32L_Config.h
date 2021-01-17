/**
  *********************************************************************
  * 文件名 KF32L_Config.h
  * 作  者  ChipON_AE/FAE_Group
  * 版  本  V2.61
  * 日  期  2019-11-16
  * 描  述  KF32L系列外设配置
  *
  *********************************************************************
  */

#ifndef _KF32L_Config_H_
#define _KF32L_Config_H_

#include "__Kungfu32_chipmodel_define.h"
/* 型号定义 */
#ifdef KF32L530KNS
	#define KF32L530
#elif defined KF32L530MNS
	#define KF32L530
#elif defined KF32L530KQT
	#define KF32L530
#elif defined KF32L530MQT
    #define KF32L530
#elif defined KF32L530MQV
	#define KF32L530
#elif defined KF32L530KQV
	#define KF32L530
#endif
#if defined KF32L530KQT || defined KF32L530MQT
    #define L530_GPTIME_EX
    #define L530_USART_EX
    #define L530_IIC2_EX
#elif defined KF32L530KQV || defined KF32L530MQV
    #define L530_GPTIME_EX
    #define L530_USART_EX
    #define L530_IIC2_EX
    #define L530_IIC3_EX
	#define L530_SPI_EX
    #define L530_EXTIC_EX
#endif

/* 外设资源 */
#ifdef KF32L530
    /* ADC */
	#define KF32L_Periph_adc
	#define KF32L_Periph_adc0
	#define KF32L_Periph_adc1
 	/* AES */
	#define KF32L_Periph_aes
	/* CAN */
	#define KF32L_Periph_can
    #define KF32L_Periph_can0
    #define KF32L_Periph_can1
	#define KF32L_Periph_can2
    /* CFGL */
    #define KF32L_Periph_cfgl
    /* CMP */
	#define KF32L_Periph_cmp
	/* CRC */
	#define KF32L_Periph_crc
	/* CTOUCH */
	#define KF32L_Periph_ctouch
	/* DAC */
	#define KF32L_Periph_dac
	#define KF32L_Periph_dac0
	#define KF32L_Periph_dac1
	/* DMA */
	#define KF32L_Periph_dma
	#define KF32L_Periph_dma0
	#define KF32L_Periph_dma1
	/* I2C */
    #define KF32L_Periph_i2c
    #define KF32L_Periph_i2c0
	#define KF32L_Periph_i2c1
	/* LCD */
	#define KF32L_Periph_lcd
	/* OP */
	#define KF32L_Periph_op
	/* QEI */
	#define KF32L_Periph_qei
	#define KF32L_Periph_qei0
	/* SPI */
	#define KF32L_Periph_spi
	#define KF32L_Periph_spi0
	#define KF32L_Periph_spi1
	#define KF32L_Periph_spi2
    /* USART */
	#define KF32L_Periph_usart
	#define KF32L_Periph_usart0
	#define KF32L_Periph_usart1
	#define KF32L_Periph_usart2
	#define KF32L_Periph_usart3
    /* USB */
	#define KF32L_Periph_usb
	/* BTIME */
	#define KF32L_Periph_btime14
	#define KF32L_Periph_btime15
	/* GPTIME */
	#define KF32L_Periph_gptime0
	#define KF32L_Periph_gptime1
	#define KF32L_Periph_gptime2
	#define KF32L_Periph_gptime3
	#define KF32L_Periph_gptime4
	#define KF32L_Periph_gptime20
	#define KF32L_Periph_gptime21
	/* ATIME */
	#define KF32L_Periph_atime5_time6
	#define KF32L_Periph_atime5
	#define KF32L_Periph_atime6
#endif //KF32L530
#ifdef L530_EXTIC_EX
	/* EXIC */
	#define KF32L_Periph_exic
#endif //L530_EXTIC_EX
#ifdef L530_IIC2_EX
	#define KF32L_Periph_i2c2
#endif //L530_IIC2_EX
#ifdef L530_IIC3_EX
	#define KF32L_Periph_i2c3
#endif //L530_IIC3_EX
#ifdef L530_SPI_EX
	#define KF32L_Periph_spi3
#endif //L530_SPI_EX
#ifdef L530_USART_EX
	#define KF32L_Periph_usart4
	#define KF32L_Periph_usart5
	#define KF32L_Periph_usart6
	#define KF32L_Periph_usart7
#endif //L530_USART_EX
#ifdef L530_GPTIME_EX
	#define KF32L_Periph_gptime18
	#define KF32L_Periph_gptime19
	#define KF32L_Periph_gptime22_time23
	#define KF32L_Periph_gptime22
	#define KF32L_Periph_gptime23
#endif //L530_GPTIME_EX

#endif /* _KF32L_Config_H */
