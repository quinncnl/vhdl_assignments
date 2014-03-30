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
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
static const char *ng2 = "//vmware-host/Shared Folders/msee/ise/ass4/cascadable_counter_tb.vhd";

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
void work_a_0194383060_3553469787_sub_2339008207_3396091961(char *, char *, char *, char *, int , int , int , char *, unsigned int , unsigned int , unsigned char );


void work_a_0194383060_3553469787_sub_3547962393_3396091961(char *t0, char *t1, char *t2, char *t3, char *t4)
{
    char t6[16];
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    unsigned char t14;

LAB0:    t7 = (t6 + 4U);
    *((char **)t7) = t2;
    t8 = (t6 + 8U);
    *((char **)t8) = t3;
    t9 = (t6 + 12U);
    *((char **)t9) = t4;
    t10 = *((int *)t2);
    t11 = (t10 + 1);
    t12 = (t2 + 0);
    *((int *)t12) = t11;
    t10 = *((int *)t2);
    t12 = (t0 + 1776U);
    t13 = *((char **)t12);
    t11 = *((int *)t13);
    t14 = (t10 == t11);
    if (t14 != 0)
        goto LAB2;

LAB4:
LAB3:    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t12 = (t4 + 0);
    *((int *)t12) = t11;
    t10 = *((int *)t4);
    t12 = (t0 + 1912U);
    t13 = *((char **)t12);
    t11 = *((int *)t13);
    t14 = (t10 == t11);
    if (t14 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB1:    return;
LAB2:    t12 = (t2 + 0);
    *((int *)t12) = 0;
    t10 = *((int *)t3);
    t11 = (t10 + 1);
    t12 = (t3 + 0);
    *((int *)t12) = t11;
    t10 = *((int *)t3);
    t12 = (t0 + 1844U);
    t13 = *((char **)t12);
    t11 = *((int *)t13);
    t14 = (t10 == t11);
    if (t14 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    t12 = (t3 + 0);
    *((int *)t12) = 0;
    goto LAB6;

LAB8:    t12 = (t4 + 0);
    *((int *)t12) = 0;
    goto LAB9;

}

void work_a_0194383060_3553469787_sub_3120068327_3396091961(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, int t5, char *t6, unsigned int t7, unsigned int t8, char *t9, unsigned int t10, unsigned int t11, int t12, char *t13, unsigned int t14, unsigned int t15, char *t16, unsigned int t17, unsigned int t18, int t19, char *t20, unsigned int t21, unsigned int t22)
{
    char t23[208];
    char t24[16];
    char t28[8];
    char t34[8];
    char t40[8];
    char t50[16];
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int t48;
    char *t49;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned char t55;
    unsigned char t56;

LAB0:    t25 = (t23 + 4U);
    t26 = ((STD_STANDARD) + 240);
    t27 = (t25 + 52U);
    *((char **)t27) = t26;
    t29 = (t25 + 36U);
    *((char **)t29) = t28;
    xsi_type_set_default_value(t26, t28, 0);
    t30 = (t25 + 48U);
    *((unsigned int *)t30) = 4U;
    t31 = (t23 + 72U);
    t32 = ((STD_STANDARD) + 240);
    t33 = (t31 + 52U);
    *((char **)t33) = t32;
    t35 = (t31 + 36U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, 0);
    t36 = (t31 + 48U);
    *((unsigned int *)t36) = 4U;
    t37 = (t23 + 140U);
    t38 = ((STD_STANDARD) + 240);
    t39 = (t37 + 52U);
    *((char **)t39) = t38;
    t41 = (t37 + 36U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, 0);
    t42 = (t37 + 48U);
    *((unsigned int *)t42) = 4U;
    t43 = (t24 + 4U);
    *((int *)t43) = t5;
    t44 = (t24 + 8U);
    *((int *)t44) = t12;
    t45 = (t24 + 12U);
    *((int *)t45) = t19;
    t46 = (t2 + 24U);
    t47 = *((char **)t46);
    t46 = (t47 + t4);
    t48 = *((int *)t46);
    t47 = (t25 + 36U);
    t49 = *((char **)t47);
    t47 = (t49 + 0);
    *((int *)t47) = t48;
    t26 = (t9 + 24U);
    t27 = *((char **)t26);
    t26 = (t27 + t11);
    t48 = *((int *)t26);
    t27 = (t31 + 36U);
    t29 = *((char **)t27);
    t27 = (t29 + 0);
    *((int *)t27) = t48;
    t26 = (t16 + 24U);
    t27 = *((char **)t26);
    t26 = (t27 + t18);
    t48 = *((int *)t26);
    t27 = (t37 + 36U);
    t29 = *((char **)t27);
    t27 = (t29 + 0);
    *((int *)t27) = t48;
    t26 = (t0 + 8676);
    t29 = (t50 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 1;
    t30 = (t29 + 4U);
    *((int *)t30) = 13;
    t30 = (t29 + 8U);
    *((int *)t30) = 1;
    t48 = (13 - 1);
    t51 = (t48 * 1);
    t51 = (t51 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t51;
    t30 = (t0 + 1776U);
    t32 = *((char **)t30);
    t52 = *((int *)t32);
    t30 = (t25 + 36U);
    t33 = *((char **)t30);
    t53 = *((int *)t33);
    t51 = (0U + t7);
    t54 = (0U + t8);
    work_a_0194383060_3553469787_sub_2339008207_3396091961(t0, t1, t26, t50, t52, t53, t5, t6, t51, t54, (unsigned char)1);
    t26 = (t6 + 24U);
    t27 = *((char **)t26);
    t26 = (t27 + t8);
    t55 = *((unsigned char *)t26);
    t56 = (t55 == (unsigned char)3);
    if (t56 != 0)
        goto LAB2;

LAB4:    t26 = (t0 + 8703);
    t29 = (t50 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 1;
    t30 = (t29 + 4U);
    *((int *)t30) = 14;
    t30 = (t29 + 8U);
    *((int *)t30) = 1;
    t48 = (14 - 1);
    t51 = (t48 * 1);
    t51 = (t51 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t51;
    t30 = (t0 + 1844U);
    t32 = *((char **)t30);
    t52 = *((int *)t32);
    t30 = (t31 + 36U);
    t33 = *((char **)t30);
    t53 = *((int *)t33);
    t51 = (0U + t14);
    t54 = (0U + t15);
    work_a_0194383060_3553469787_sub_2339008207_3396091961(t0, t1, t26, t50, t52, t53, t12, t13, t51, t54, (unsigned char)0);

LAB3:    t26 = (t0 + 8717);
    t29 = (t50 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 1;
    t30 = (t29 + 4U);
    *((int *)t30) = 13;
    t30 = (t29 + 8U);
    *((int *)t30) = 1;
    t48 = (13 - 1);
    t51 = (t48 * 1);
    t51 = (t51 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t51;
    t30 = (t0 + 1912U);
    t32 = *((char **)t30);
    t52 = *((int *)t32);
    t30 = (t37 + 36U);
    t33 = *((char **)t30);
    t53 = *((int *)t33);
    t51 = (0U + t21);
    t54 = (0U + t22);
    work_a_0194383060_3553469787_sub_2339008207_3396091961(t0, t1, t26, t50, t52, t53, t19, t20, t51, t54, (unsigned char)1);

LAB1:    return;
LAB2:    t27 = (t0 + 8689);
    t30 = (t50 + 0U);
    t32 = (t30 + 0U);
    *((int *)t32) = 1;
    t32 = (t30 + 4U);
    *((int *)t32) = 14;
    t32 = (t30 + 8U);
    *((int *)t32) = 1;
    t48 = (14 - 1);
    t51 = (t48 * 1);
    t51 = (t51 + 1);
    t32 = (t30 + 12U);
    *((unsigned int *)t32) = t51;
    t32 = (t0 + 1844U);
    t33 = *((char **)t32);
    t52 = *((int *)t33);
    t32 = (t31 + 36U);
    t35 = *((char **)t32);
    t53 = *((int *)t35);
    t51 = (0U + t14);
    t54 = (0U + t15);
    work_a_0194383060_3553469787_sub_2339008207_3396091961(t0, t1, t27, t50, t52, t53, t12, t13, t51, t54, (unsigned char)1);
    goto LAB3;

}

void work_a_0194383060_3553469787_sub_2339008207_3396091961(char *t0, char *t1, char *t2, char *t3, int t4, int t5, int t6, char *t7, unsigned int t8, unsigned int t9, unsigned char t10)
{
    char t12[32];
    char t24[16];
    char t26[16];
    char t33[16];
    char t35[16];
    char t41[16];
    char t43[16];
    char t47[16];
    char t51[16];
    char t56[16];
    char t58[16];
    char t62[16];
    char t66[16];
    char t71[16];
    char t73[16];
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t34;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    char *t40;
    char *t42;
    char *t44;
    char *t45;
    int t46;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t59;
    char *t60;
    int t61;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t70;
    char *t72;
    char *t74;
    char *t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned char t88;
    unsigned char t89;
    unsigned char t90;

LAB0:    t13 = (t12 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t12 + 8U);
    *((char **)t15) = t3;
    t16 = (t12 + 12U);
    *((int *)t16) = t4;
    t17 = (t12 + 16U);
    *((int *)t17) = t5;
    t18 = (t12 + 20U);
    *((int *)t18) = t6;
    t19 = (t12 + 24U);
    *((unsigned char *)t19) = t10;
    t20 = (t5 == t6);
    if (t20 == 0)
        goto LAB4;

LAB5:    t29 = (t4 - 1);
    t20 = (t5 == t29);
    if (t20 == 1)
        goto LAB9;

LAB10:    t14 = (unsigned char)0;

LAB11:    if (t14 != 0)
        goto LAB6;

LAB8:    t21 = (t7 + 24U);
    t22 = *((char **)t21);
    t21 = (t22 + t9);
    t14 = *((unsigned char *)t21);
    t20 = (t14 == (unsigned char)2);
    if (t20 == 0)
        goto LAB14;

LAB15:
LAB7:
LAB1:    return;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t21 = (t0 + 8730);
    t25 = ((STD_STANDARD) + 664);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 10;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t29 = (10 - 1);
    t30 = (t29 * 1);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;
    t23 = xsi_base_array_concat(t23, t24, t25, (char)97, t21, t26, (char)97, t2, t3, (char)101);
    t28 = (t0 + 8740);
    t34 = ((STD_STANDARD) + 664);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 1;
    t37 = (t36 + 4U);
    *((int *)t37) = 10;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (10 - 1);
    t30 = (t38 * 1);
    t30 = (t30 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t30;
    t32 = xsi_base_array_concat(t32, t33, t34, (char)97, t23, t24, (char)97, t28, t35, (char)101);
    t37 = (t0 + 8750);
    t42 = ((STD_STANDARD) + 664);
    t44 = (t43 + 0U);
    t45 = (t44 + 0U);
    *((int *)t45) = 1;
    t45 = (t44 + 4U);
    *((int *)t45) = 11;
    t45 = (t44 + 8U);
    *((int *)t45) = 1;
    t46 = (11 - 1);
    t30 = (t46 * 1);
    t30 = (t30 + 1);
    t45 = (t44 + 12U);
    *((unsigned int *)t45) = t30;
    t40 = xsi_base_array_concat(t40, t41, t42, (char)97, t32, t33, (char)97, t37, t43, (char)101);
    t45 = ((STD_STANDARD) + 240);
    t48 = xsi_int_to_mem(t6);
    t49 = xsi_string_variable_get_image(t47, t45, t48);
    t52 = ((STD_STANDARD) + 664);
    t50 = xsi_base_array_concat(t50, t51, t52, (char)97, t40, t41, (char)97, t49, t47, (char)101);
    t53 = (t0 + 8761);
    t57 = ((STD_STANDARD) + 664);
    t59 = (t58 + 0U);
    t60 = (t59 + 0U);
    *((int *)t60) = 1;
    t60 = (t59 + 4U);
    *((int *)t60) = 12;
    t60 = (t59 + 8U);
    *((int *)t60) = 1;
    t61 = (12 - 1);
    t30 = (t61 * 1);
    t30 = (t30 + 1);
    t60 = (t59 + 12U);
    *((unsigned int *)t60) = t30;
    t55 = xsi_base_array_concat(t55, t56, t57, (char)97, t50, t51, (char)97, t53, t58, (char)101);
    t60 = ((STD_STANDARD) + 240);
    t63 = xsi_int_to_mem(t5);
    t64 = xsi_string_variable_get_image(t62, t60, t63);
    t67 = ((STD_STANDARD) + 664);
    t65 = xsi_base_array_concat(t65, t66, t67, (char)97, t55, t56, (char)97, t64, t62, (char)101);
    t68 = (t0 + 8773);
    t72 = ((STD_STANDARD) + 664);
    t74 = (t73 + 0U);
    t75 = (t74 + 0U);
    *((int *)t75) = 1;
    t75 = (t74 + 4U);
    *((int *)t75) = 2;
    t75 = (t74 + 8U);
    *((int *)t75) = 1;
    t76 = (2 - 1);
    t30 = (t76 * 1);
    t30 = (t30 + 1);
    t75 = (t74 + 12U);
    *((unsigned int *)t75) = t30;
    t70 = xsi_base_array_concat(t70, t71, t72, (char)97, t65, t66, (char)97, t68, t73, (char)101);
    t75 = (t3 + 12U);
    t30 = *((unsigned int *)t75);
    t30 = (t30 * 1U);
    t77 = (10U + t30);
    t78 = (t77 + 10U);
    t79 = (t78 + 11U);
    t80 = (t47 + 12U);
    t81 = *((unsigned int *)t80);
    t82 = (t79 + t81);
    t83 = (t82 + 12U);
    t84 = (t62 + 12U);
    t85 = *((unsigned int *)t84);
    t86 = (t83 + t85);
    t87 = (t86 + 2U);
    xsi_report(t70, t87, (unsigned char)0);
    goto LAB5;

LAB6:    t21 = (t7 + 24U);
    t22 = *((char **)t21);
    t21 = (t22 + t9);
    t88 = *((unsigned char *)t21);
    t89 = (t88 == (unsigned char)3);
    if (t89 == 0)
        goto LAB12;

LAB13:    goto LAB7;

LAB9:    t14 = t10;
    goto LAB11;

LAB12:    t22 = (t0 + 8775);
    t27 = ((STD_STANDARD) + 664);
    t28 = (t26 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = 1;
    t31 = (t28 + 4U);
    *((int *)t31) = 16;
    t31 = (t28 + 8U);
    *((int *)t31) = 1;
    t38 = (16 - 1);
    t30 = (t38 * 1);
    t30 = (t30 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t30;
    t25 = xsi_base_array_concat(t25, t24, t27, (char)97, t22, t26, (char)97, t2, t3, (char)101);
    t31 = (t0 + 8791);
    t36 = ((STD_STANDARD) + 664);
    t37 = (t35 + 0U);
    t39 = (t37 + 0U);
    *((int *)t39) = 1;
    t39 = (t37 + 4U);
    *((int *)t39) = 10;
    t39 = (t37 + 8U);
    *((int *)t39) = 1;
    t46 = (10 - 1);
    t30 = (t46 * 1);
    t30 = (t30 + 1);
    t39 = (t37 + 12U);
    *((unsigned int *)t39) = t30;
    t34 = xsi_base_array_concat(t34, t33, t36, (char)97, t25, t24, (char)97, t31, t35, (char)101);
    t39 = (t0 + 8801);
    t44 = ((STD_STANDARD) + 664);
    t45 = (t43 + 0U);
    t48 = (t45 + 0U);
    *((int *)t48) = 1;
    t48 = (t45 + 4U);
    *((int *)t48) = 26;
    t48 = (t45 + 8U);
    *((int *)t48) = 1;
    t61 = (26 - 1);
    t30 = (t61 * 1);
    t30 = (t30 + 1);
    t48 = (t45 + 12U);
    *((unsigned int *)t48) = t30;
    t42 = xsi_base_array_concat(t42, t41, t44, (char)97, t34, t33, (char)97, t39, t43, (char)101);
    t48 = ((IEEE_P_2592010699) + 1852);
    t49 = (t7 + 24U);
    t50 = *((char **)t49);
    t49 = (t50 + t9);
    t90 = *((unsigned char *)t49);
    t50 = xsi_char_to_mem(t90);
    t52 = xsi_string_variable_get_image(t47, t48, t50);
    t54 = ((STD_STANDARD) + 664);
    t53 = xsi_base_array_concat(t53, t51, t54, (char)97, t42, t41, (char)97, t52, t47, (char)101);
    t55 = (t0 + 8827);
    t60 = ((STD_STANDARD) + 664);
    t63 = (t58 + 0U);
    t64 = (t63 + 0U);
    *((int *)t64) = 1;
    t64 = (t63 + 4U);
    *((int *)t64) = 2;
    t64 = (t63 + 8U);
    *((int *)t64) = 1;
    t76 = (2 - 1);
    t30 = (t76 * 1);
    t30 = (t30 + 1);
    t64 = (t63 + 12U);
    *((unsigned int *)t64) = t30;
    t59 = xsi_base_array_concat(t59, t56, t60, (char)97, t53, t51, (char)97, t55, t58, (char)101);
    t64 = (t3 + 12U);
    t30 = *((unsigned int *)t64);
    t30 = (t30 * 1U);
    t77 = (16U + t30);
    t78 = (t77 + 10U);
    t79 = (t78 + 26U);
    t65 = (t47 + 12U);
    t81 = *((unsigned int *)t65);
    t82 = (t79 + t81);
    t83 = (t82 + 2U);
    xsi_report(t59, t83, (unsigned char)0);
    goto LAB13;

LAB14:    t22 = (t0 + 8829);
    t27 = ((STD_STANDARD) + 664);
    t28 = (t26 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = 1;
    t31 = (t28 + 4U);
    *((int *)t31) = 16;
    t31 = (t28 + 8U);
    *((int *)t31) = 1;
    t29 = (16 - 1);
    t30 = (t29 * 1);
    t30 = (t30 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t30;
    t25 = xsi_base_array_concat(t25, t24, t27, (char)97, t22, t26, (char)97, t2, t3, (char)101);
    t31 = (t0 + 8845);
    t36 = ((STD_STANDARD) + 664);
    t37 = (t35 + 0U);
    t39 = (t37 + 0U);
    *((int *)t39) = 1;
    t39 = (t37 + 4U);
    *((int *)t39) = 10;
    t39 = (t37 + 8U);
    *((int *)t39) = 1;
    t38 = (10 - 1);
    t30 = (t38 * 1);
    t30 = (t30 + 1);
    t39 = (t37 + 12U);
    *((unsigned int *)t39) = t30;
    t34 = xsi_base_array_concat(t34, t33, t36, (char)97, t25, t24, (char)97, t31, t35, (char)101);
    t39 = (t0 + 8855);
    t44 = ((STD_STANDARD) + 664);
    t45 = (t43 + 0U);
    t48 = (t45 + 0U);
    *((int *)t48) = 1;
    t48 = (t45 + 4U);
    *((int *)t48) = 26;
    t48 = (t45 + 8U);
    *((int *)t48) = 1;
    t46 = (26 - 1);
    t30 = (t46 * 1);
    t30 = (t30 + 1);
    t48 = (t45 + 12U);
    *((unsigned int *)t48) = t30;
    t42 = xsi_base_array_concat(t42, t41, t44, (char)97, t34, t33, (char)97, t39, t43, (char)101);
    t48 = ((IEEE_P_2592010699) + 1852);
    t49 = (t7 + 24U);
    t50 = *((char **)t49);
    t49 = (t50 + t9);
    t88 = *((unsigned char *)t49);
    t50 = xsi_char_to_mem(t88);
    t52 = xsi_string_variable_get_image(t47, t48, t50);
    t54 = ((STD_STANDARD) + 664);
    t53 = xsi_base_array_concat(t53, t51, t54, (char)97, t42, t41, (char)97, t52, t47, (char)101);
    t55 = (t0 + 8881);
    t60 = ((STD_STANDARD) + 664);
    t63 = (t58 + 0U);
    t64 = (t63 + 0U);
    *((int *)t64) = 1;
    t64 = (t63 + 4U);
    *((int *)t64) = 2;
    t64 = (t63 + 8U);
    *((int *)t64) = 1;
    t61 = (2 - 1);
    t30 = (t61 * 1);
    t30 = (t30 + 1);
    t64 = (t63 + 12U);
    *((unsigned int *)t64) = t30;
    t59 = xsi_base_array_concat(t59, t56, t60, (char)97, t53, t51, (char)97, t55, t58, (char)101);
    t64 = (t3 + 12U);
    t30 = *((unsigned int *)t64);
    t30 = (t30 * 1U);
    t77 = (16U + t30);
    t78 = (t77 + 10U);
    t79 = (t78 + 26U);
    t65 = (t47 + 12U);
    t81 = *((unsigned int *)t65);
    t82 = (t79 + t81);
    t83 = (t82 + 2U);
    xsi_report(t59, t83, (unsigned char)0);
    goto LAB15;

}

static void work_a_0194383060_3553469787_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(284, ng2);
    t1 = (t0 + 1980U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (t3 / 2);
    t1 = (t0 + 684U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t6);
    t1 = (t0 + 4048);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_delta(t1, 0U, 1, t4);
    t12 = (t0 + 4048);
    xsi_driver_intertial_reject(t12, t4, t4);
    t1 = (t0 + 3980);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_0194383060_3553469787_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    int64 t8;
    int64 t9;

LAB0:    t1 = (t0 + 3496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(290, ng2);
    t2 = (t0 + 4084);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(291, ng2);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t7 = *((int *)t3);
    t2 = (t0 + 1980U);
    t4 = *((char **)t2);
    t8 = *((int64 *)t4);
    t9 = (t7 * t8);
    t2 = (t0 + 3396);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(292, ng2);
    t2 = (t0 + 4084);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(293, ng2);
    t2 = (t0 + 2116U);
    t3 = *((char **)t2);
    t7 = *((int *)t3);
    t2 = (t0 + 1980U);
    t4 = *((char **)t2);
    t8 = *((int64 *)t4);
    t9 = (t7 * t8);
    t2 = (t0 + 3396);
    xsi_process_wait(t2, t9);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(294, ng2);
    if ((unsigned char)0 == 0)
        goto LAB12;

LAB13:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t2 = (t0 + 8883);
    xsi_report(t2, 47U, (unsigned char)3);
    goto LAB13;

}

static void work_a_0194383060_3553469787_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    int64 t8;
    int64 t9;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(300, ng2);
    t2 = (t0 + 4120);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(301, ng2);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t7 = *((int *)t3);
    t2 = (t0 + 1980U);
    t4 = *((char **)t2);
    t8 = *((int64 *)t4);
    t9 = (t7 * t8);
    t2 = (t0 + 3540);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(302, ng2);

LAB8:    if ((unsigned char)1 != 0)
        goto LAB9;

LAB11:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(303, ng2);
    t2 = (t0 + 4120);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(304, ng2);
    t2 = (t0 + 2252U);
    t3 = *((char **)t2);
    t7 = *((int *)t3);
    t2 = (t0 + 1980U);
    t4 = *((char **)t2);
    t8 = *((int64 *)t4);
    t9 = (t7 * t8);
    t2 = (t0 + 3540);
    xsi_process_wait(t2, t9);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:;
LAB12:    xsi_set_current_line(305, ng2);
    t2 = (t0 + 4120);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(306, ng2);
    t2 = (t0 + 1980U);
    t3 = *((char **)t2);
    t8 = *((int64 *)t3);
    t2 = (t0 + 3540);
    xsi_process_wait(t2, t8);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB8;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_0194383060_3553469787_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int t5;
    char *t6;
    int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    char *t22;
    int t23;

LAB0:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(327, ng2);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(328, ng2);
    t2 = (t0 + 2524U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(329, ng2);
    t2 = (t0 + 2592U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(332, ng2);
    t4 = (5 * 1000LL);
    t2 = (t0 + 3684);
    xsi_process_wait(t2, t4);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(335, ng2);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(336, ng2);

LAB8:    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t2 = (t0 + 2048U);
    t6 = *((char **)t2);
    t7 = *((int *)t6);
    t8 = (t5 < t7);
    if (t8 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(346, ng2);

LAB16:    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t2 = (t0 + 2184U);
    t6 = *((char **)t2);
    t7 = *((int *)t6);
    t8 = (t5 < t7);
    if (t8 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(361, ng2);
    t2 = (t0 + 2388U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(362, ng2);

LAB24:    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t2 = (t0 + 2048U);
    t6 = *((char **)t2);
    t7 = *((int *)t6);
    t2 = (t0 + 2116U);
    t9 = *((char **)t2);
    t12 = *((int *)t9);
    t16 = (t7 + t12);
    t8 = (t5 <= t16);
    if (t8 != 0)
        goto LAB25;

LAB27:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(339, ng2);
    t2 = (t0 + 3684);
    t9 = (t0 + 1028U);
    t10 = (t0 + 2456U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t10 = (t0 + 936U);
    t13 = (t0 + 1212U);
    t14 = (t0 + 2524U);
    t15 = *((char **)t14);
    t16 = *((int *)t15);
    t14 = (t0 + 1120U);
    t17 = (t0 + 1396U);
    t18 = (t0 + 2592U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t0 + 1304U);
    work_a_0194383060_3553469787_sub_3120068327_3396091961(t0, t2, t9, 0U, 0U, t12, t10, 0U, 0U, t13, 0U, 0U, t16, t14, 0U, 0U, t17, 0U, 0U, t20, t18, 0U, 0U);
    xsi_set_current_line(341, ng2);
    t2 = (t0 + 1980U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3684);
    xsi_process_wait(t2, t4);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:;
LAB12:    xsi_set_current_line(342, ng2);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t7 = (t5 + 1);
    t2 = (t0 + 2320U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t7;
    goto LAB8;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    xsi_set_current_line(349, ng2);
    t2 = (t0 + 3684);
    t9 = (t0 + 1028U);
    t10 = (t0 + 2456U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t10 = (t0 + 936U);
    t13 = (t0 + 1212U);
    t14 = (t0 + 2524U);
    t15 = *((char **)t14);
    t16 = *((int *)t15);
    t14 = (t0 + 1120U);
    t17 = (t0 + 1396U);
    t18 = (t0 + 2592U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t0 + 1304U);
    work_a_0194383060_3553469787_sub_3120068327_3396091961(t0, t2, t9, 0U, 0U, t12, t10, 0U, 0U, t13, 0U, 0U, t16, t14, 0U, 0U, t17, 0U, 0U, t20, t18, 0U, 0U);
    xsi_set_current_line(352, ng2);
    t2 = (t0 + 3684);
    t3 = (t0 + 2456U);
    t6 = *((char **)t3);
    t3 = (t6 + 0);
    t9 = (t0 + 2524U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t11 = (t0 + 2592U);
    t13 = *((char **)t11);
    t11 = (t13 + 0);
    work_a_0194383060_3553469787_sub_3547962393_3396091961(t0, t2, t3, t9, t11);
    xsi_set_current_line(355, ng2);
    t2 = (t0 + 1980U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3684);
    xsi_process_wait(t2, t4);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB18:;
LAB20:    xsi_set_current_line(356, ng2);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t7 = (t5 + 1);
    t2 = (t0 + 2320U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t7;
    goto LAB16;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB25:    xsi_set_current_line(365, ng2);
    t2 = (t0 + 3684);
    t10 = (t0 + 1028U);
    t11 = (t0 + 2456U);
    t13 = *((char **)t11);
    t20 = *((int *)t13);
    t11 = (t0 + 936U);
    t14 = (t0 + 1212U);
    t15 = (t0 + 2524U);
    t17 = *((char **)t15);
    t21 = *((int *)t17);
    t15 = (t0 + 1120U);
    t18 = (t0 + 1396U);
    t19 = (t0 + 2592U);
    t22 = *((char **)t19);
    t23 = *((int *)t22);
    t19 = (t0 + 1304U);
    work_a_0194383060_3553469787_sub_3120068327_3396091961(t0, t2, t10, 0U, 0U, t20, t11, 0U, 0U, t14, 0U, 0U, t21, t15, 0U, 0U, t18, 0U, 0U, t23, t19, 0U, 0U);
    xsi_set_current_line(367, ng2);
    t2 = (t0 + 2388U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t7 = (t5 + 1);
    t2 = (t0 + 2388U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t7;
    xsi_set_current_line(368, ng2);
    t2 = (t0 + 2388U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t2 = (t0 + 2252U);
    t6 = *((char **)t2);
    t7 = *((int *)t6);
    t12 = (t7 + 1);
    t8 = (t5 == t12);
    if (t8 != 0)
        goto LAB28;

LAB30:
LAB29:    xsi_set_current_line(376, ng2);
    t2 = (t0 + 1980U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3684);
    xsi_process_wait(t2, t4);

LAB33:    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB26:;
LAB28:    xsi_set_current_line(369, ng2);
    t2 = (t0 + 2388U);
    t9 = *((char **)t2);
    t2 = (t9 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(372, ng2);
    t2 = (t0 + 3684);
    t3 = (t0 + 2456U);
    t6 = *((char **)t3);
    t3 = (t6 + 0);
    t9 = (t0 + 2524U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t11 = (t0 + 2592U);
    t13 = *((char **)t11);
    t11 = (t13 + 0);
    work_a_0194383060_3553469787_sub_3547962393_3396091961(t0, t2, t3, t9, t11);
    goto LAB29;

LAB31:    xsi_set_current_line(377, ng2);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t7 = (t5 + 1);
    t2 = (t0 + 2320U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t7;
    goto LAB24;

LAB32:    goto LAB31;

LAB34:    goto LAB32;

}


extern void work_a_0194383060_3553469787_init()
{
	static char *pe[] = {(void *)work_a_0194383060_3553469787_p_0,(void *)work_a_0194383060_3553469787_p_1,(void *)work_a_0194383060_3553469787_p_2,(void *)work_a_0194383060_3553469787_p_3};
	static char *se[] = {(void *)work_a_0194383060_3553469787_sub_3547962393_3396091961,(void *)work_a_0194383060_3553469787_sub_3120068327_3396091961,(void *)work_a_0194383060_3553469787_sub_2339008207_3396091961};
	xsi_register_didat("work_a_0194383060_3553469787", "isim/cascadable_counter_tb_isim_beh.exe.sim/work/a_0194383060_3553469787.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
