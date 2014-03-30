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
static const char *ng0 = "//vmware-host/Shared Folders/msee/ise/arr3/cascadable_counter_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0194383060_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1780U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2180);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1680);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2180);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1680);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0194383060_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int t8;
    int t9;
    unsigned char t10;
    int t11;
    char *t12;

LAB0:    t1 = (t0 + 1924U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2216);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2252);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2288);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t7 = (175 * 1000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2216);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2252);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2288);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);
    t7 = (150 * 1000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2288);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2216);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2252);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(108, ng0);
    t7 = (350 * 1000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2288);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2216);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2252);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(114, ng0);
    t7 = (350 * 1000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t7);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2288);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2216);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2252);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);
    t7 = (350 * 1000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t7);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4300);
    *((int *)t2) = 1;
    t3 = (t0 + 4304);
    *((int *)t3) = 10;
    t8 = 1;
    t9 = 10;

LAB24:    if (t8 <= t9)
        goto LAB25;

LAB27:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2288);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2252);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4308);
    *((int *)t2) = 1;
    t3 = (t0 + 4312);
    *((int *)t3) = 10;
    t8 = 1;
    t9 = 10;

LAB40:    if (t8 <= t9)
        goto LAB41;

LAB43:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2288);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2252);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4316);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((int *)t3) = 10;
    t8 = 1;
    t9 = 10;

LAB56:    if (t8 <= t9)
        goto LAB57;

LAB59:    goto LAB2;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB25:    xsi_set_current_line(122, ng0);

LAB30:    t4 = (t0 + 2120);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB26:    t2 = (t0 + 4300);
    t8 = *((int *)t2);
    t3 = (t0 + 4304);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB27;

LAB39:    t11 = (t8 + 1);
    t8 = t11;
    t4 = (t0 + 4300);
    *((int *)t4) = t8;
    goto LAB24;

LAB28:    t6 = (t0 + 2120);
    *((int *)t6) = 0;
    xsi_set_current_line(123, ng0);
    t7 = (25 * 1000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t7);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    t5 = (t0 + 660U);
    t10 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t10 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4300);
    t11 = xsi_vhdl_mod(*((int *)t2), 2);
    t10 = (t11 == 0);
    if (t10 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2252);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB37:    goto LAB26;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 2252);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t12 = *((char **)t6);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB37;

LAB41:    xsi_set_current_line(134, ng0);

LAB46:    t4 = (t0 + 2128);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB42:    t2 = (t0 + 4308);
    t8 = *((int *)t2);
    t3 = (t0 + 4312);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB43;

LAB55:    t11 = (t8 + 1);
    t8 = t11;
    t4 = (t0 + 4308);
    *((int *)t4) = t8;
    goto LAB40;

LAB44:    t6 = (t0 + 2128);
    *((int *)t6) = 0;
    xsi_set_current_line(135, ng0);
    t7 = (25 * 1000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t7);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    t5 = (t0 + 660U);
    t10 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t10 == 1)
        goto LAB44;
    else
        goto LAB46;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4308);
    t11 = xsi_vhdl_mod(*((int *)t2), 2);
    t10 = (t11 == 0);
    if (t10 != 0)
        goto LAB52;

LAB54:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2216);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB53:    goto LAB42;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 2216);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t12 = *((char **)t6);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB53;

LAB57:    xsi_set_current_line(147, ng0);

LAB62:    t4 = (t0 + 2136);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB58:    t2 = (t0 + 4316);
    t8 = *((int *)t2);
    t3 = (t0 + 4320);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB59;

LAB71:    t11 = (t8 + 1);
    t8 = t11;
    t4 = (t0 + 4316);
    *((int *)t4) = t8;
    goto LAB56;

LAB60:    t6 = (t0 + 2136);
    *((int *)t6) = 0;
    xsi_set_current_line(148, ng0);
    t7 = (25 * 1000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t7);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB61:    t5 = (t0 + 660U);
    t10 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t10 == 1)
        goto LAB60;
    else
        goto LAB62;

LAB63:    goto LAB61;

LAB64:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4316);
    t11 = xsi_vhdl_mod(*((int *)t2), 2);
    t10 = (t11 == 0);
    if (t10 != 0)
        goto LAB68;

LAB70:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2216);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2252);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB69:    goto LAB58;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 2216);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t12 = *((char **)t6);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2252);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB69;

}


extern void work_a_0194383060_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0194383060_2372691052_p_0,(void *)work_a_0194383060_2372691052_p_1};
	xsi_register_didat("work_a_0194383060_2372691052", "isim/cascadable_counter_tb_isim_beh.exe.sim/work/a_0194383060_2372691052.didat");
	xsi_register_executes(pe);
}
