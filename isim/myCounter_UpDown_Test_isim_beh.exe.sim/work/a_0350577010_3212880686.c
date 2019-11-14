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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Documents/Kuliah/Semester_5/Prak. VLSI/Pertemuan_06/Percobaan_02/myCounter_UpDown.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_0350577010_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5032);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0350577010_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(50, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (6 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5256);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 5048);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0350577010_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (5 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5320);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 5064);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0350577010_3212880686_p_3(char *t0)
{
    char t8[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;

LAB0:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5080);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2312U);
    t9 = *((char **)t4);
    t4 = (t0 + 8692U);
    t10 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t8, t9, t4, (unsigned char)3);
    t11 = (t8 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t14 = (24U != t13);
    if (t14 == 1)
        goto LAB8;

LAB9:    t15 = (t0 + 5384);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 24U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 8692U);
    t5 = (t0 + 8756);
    t10 = (t8 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 23;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t20 = (23 - 0);
    t12 = (t20 * 1);
    t12 = (t12 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t12;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t8);
    if (t1 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 5448);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB11:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_size_not_matching(24U, t13, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(59, ng0);
    t11 = (t0 + 5448);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 8780);
    t5 = (t0 + 5384);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 24U);
    xsi_driver_first_trans_fast(t5);
    goto LAB11;

}

static void work_a_0350577010_3212880686_p_4(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5096);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 8804);
    t6 = (t0 + 5512);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8676U);
    t5 = (t0 + 8816);
    t7 = (t14 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t17;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t14);
    if (t3 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8676U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t14 + 12U);
    t17 = *((unsigned int *)t6);
    t25 = (1U * t17);
    t3 = (4U != t25);
    if (t3 == 1)
        goto LAB21;

LAB22:    t7 = (t0 + 5512);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);

LAB19:
LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1672U);
    t7 = *((char **)t2);
    t2 = (t0 + 8676U);
    t8 = (t0 + 8808);
    t10 = (t14 + 0U);
    t15 = (t10 + 0U);
    *((int *)t15) = 0;
    t15 = (t10 + 4U);
    *((int *)t15) = 3;
    t15 = (t10 + 8U);
    *((int *)t15) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t10 + 12U);
    *((unsigned int *)t15) = t17;
    t18 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t2, t8, t14);
    if (t18 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8676U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t14 + 12U);
    t17 = *((unsigned int *)t6);
    t25 = (1U * t17);
    t3 = (4U != t25);
    if (t3 == 1)
        goto LAB16;

LAB17:    t7 = (t0 + 5512);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(76, ng0);
    t15 = (t0 + 8812);
    t20 = (t0 + 5512);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t15, 4U);
    xsi_driver_first_trans_fast(t20);
    goto LAB14;

LAB16:    xsi_size_not_matching(4U, t25, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(82, ng0);
    t8 = (t0 + 8820);
    t10 = (t0 + 5512);
    t15 = (t10 + 56U);
    t19 = *((char **)t15);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB19;

LAB21:    xsi_size_not_matching(4U, t25, 0);
    goto LAB22;

}

static void work_a_0350577010_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    int t43;
    char *t44;
    int t46;
    char *t47;
    int t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;

LAB0:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8824);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB20:    t5 = (t0 + 8828);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB21:    t8 = (t0 + 8832);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB22:    t11 = (t0 + 8836);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB23:    t14 = (t0 + 8840);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB24:    t17 = (t0 + 8844);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB25:    t20 = (t0 + 8848);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB9;

LAB26:    t23 = (t0 + 8852);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB10;

LAB27:    t26 = (t0 + 8856);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB11;

LAB28:    t29 = (t0 + 8860);
    t31 = xsi_mem_cmp(t29, t2, 4U);
    if (t31 == 1)
        goto LAB12;

LAB29:    t32 = (t0 + 8864);
    t34 = xsi_mem_cmp(t32, t2, 4U);
    if (t34 == 1)
        goto LAB13;

LAB30:    t35 = (t0 + 8868);
    t37 = xsi_mem_cmp(t35, t2, 4U);
    if (t37 == 1)
        goto LAB14;

LAB31:    t38 = (t0 + 8872);
    t40 = xsi_mem_cmp(t38, t2, 4U);
    if (t40 == 1)
        goto LAB15;

LAB32:    t41 = (t0 + 8876);
    t43 = xsi_mem_cmp(t41, t2, 4U);
    if (t43 == 1)
        goto LAB16;

LAB33:    t44 = (t0 + 8880);
    t46 = xsi_mem_cmp(t44, t2, 4U);
    if (t46 == 1)
        goto LAB17;

LAB34:    t47 = (t0 + 8884);
    t49 = xsi_mem_cmp(t47, t2, 4U);
    if (t49 == 1)
        goto LAB18;

LAB35:
LAB19:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 9000);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 5112);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(95, ng0);
    t50 = (t0 + 8888);
    t52 = (t0 + 5576);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memcpy(t56, t50, 0U);
    xsi_driver_first_trans_fast_port(t52);
    goto LAB2;

LAB4:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 8895);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 8902);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB6:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 8909);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB7:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 8916);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 8923);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 8930);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB10:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 8937);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB11:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 8944);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB12:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 8951);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB13:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 8958);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB14:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 8965);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB15:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 8972);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB16:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 8979);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB17:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 8986);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB18:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 8993);
    t3 = (t0 + 5576);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 0U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB36:;
}


extern void work_a_0350577010_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0350577010_3212880686_p_0,(void *)work_a_0350577010_3212880686_p_1,(void *)work_a_0350577010_3212880686_p_2,(void *)work_a_0350577010_3212880686_p_3,(void *)work_a_0350577010_3212880686_p_4,(void *)work_a_0350577010_3212880686_p_5};
	xsi_register_didat("work_a_0350577010_3212880686", "isim/myCounter_UpDown_Test_isim_beh.exe.sim/work/a_0350577010_3212880686.didat");
	xsi_register_executes(pe);
}
