/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x2f00eba5 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//vmware-host/Shared Folders/msee/ise/ass3/cascadable_counter.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3871189672_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    int t14;
    int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t9 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2356);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 2416);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1144U);
    t7 = *((char **)t2);
    t14 = *((int *)t7);
    t15 = (5 - 1);
    t16 = (t14 == t15);
    if (t16 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t14 = *((int *)t2);
    t15 = (t14 + 1);
    t1 = (t0 + 2416);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = t15;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB3;

LAB7:    t2 = (t0 + 868U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)3);
    t3 = t13;
    goto LAB9;

LAB10:    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t4 = t11;
    goto LAB12;

LAB13:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2416);
    t8 = (t2 + 32U);
    t17 = *((char **)t8);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((int *)t19) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

}

static void work_a_3871189672_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 2452);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 2364);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3871189672_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (5 - 1);
    t6 = (t4 == t5);
    if (t6 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2488);
    t3 = (t2 + 32U);
    t7 = *((char **)t3);
    t10 = (t7 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB3:    t2 = (t0 + 2372);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2488);
    t10 = (t2 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 868U);
    t7 = *((char **)t2);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t1 = t9;
    goto LAB7;

}


extern void work_a_3871189672_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3871189672_3212880686_p_0,(void *)work_a_3871189672_3212880686_p_1,(void *)work_a_3871189672_3212880686_p_2};
	xsi_register_didat("work_a_3871189672_3212880686", "isim/cascadable_counter_tb_isim_beh.exe.sim/work/a_3871189672_3212880686.didat");
	xsi_register_executes(pe);
}
