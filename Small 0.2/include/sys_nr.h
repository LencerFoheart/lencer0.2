/*
 * Small/include/sys_nr.h
 * 
 * (C) 2012-2013 Yafei Zheng
 * V0.2 2013-01-31 22:30:01
 *
 * Email: e9999e@163.com, QQ: 1039332004
 */

/*
 * 此文件包含中断号，以及系统调用号定义
 */

#ifndef _SYS_NR_H_
#define _SYS_NR_H_
//**********************************************************************
// 以下定义8259A中断处理程序的中断号，程序最开始对8259A进行了重编程，设置其中断号为0x20 - 0x2f

#define NR_TIMER_INT		0x20
#define NR_KEYBOARD_INT		0x21

//**********************************************************************
#endif // _SYS_NR_H_