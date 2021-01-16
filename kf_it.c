/**
  ******************************************************************************
  * 文件名  kf_it.c
  * 作  者  ChipON_AE/FAE_Group
  * 版  本  V2.2
  * 日  期  2019-11-16
  * 描  述  该文件提供了部分中断入口地址
  *
  *********************************************************************
  */

//*****************************************************************************************
//                                 NMI中断函数
//*****************************************************************************************	
void __attribute__((interrupt)) _NMI_exception (void)
{	

}

//*****************************************************************************************
//                               硬件错误中断函数
//*****************************************************************************************	
void __attribute__((interrupt)) _HardFault_exception (void)
{

}

//*****************************************************************************************
//                                堆栈错误中断函数
//*****************************************************************************************	
void __attribute__((interrupt)) _StackFault_exception (void)
{

}

//*****************************************************************************************
//                               SVC中断函数
//*****************************************************************************************	
void __attribute__((interrupt)) _SVC_exception (void)
{

}

//*****************************************************************************************
//                              SoftSV中断函数
//*****************************************************************************************	
void __attribute__((interrupt)) _SoftSV_exception (void)
{

}

//*****************************************************************************************
//                              SysTick中断函数
//*****************************************************************************************	
void __attribute__((interrupt)) _SysTick_exception (void)
{
	
}
