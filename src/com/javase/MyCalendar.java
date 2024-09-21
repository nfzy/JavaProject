package com.javase;

public class MyCalendar {
    public static void main(String[] args) {
        /*
         * 2024.10.1可分解成年+月+1
         * 年：1900 -> 2024
         * 月：2024.1 -> 2024.9
         * 日：+1
         * 
         */

        // 计算从1900年到2024年有多少天
        int days = 0; // 记录到今年有多少天
        int month = 10;

        for (int i = 1900; i < 2024; ++i) {
            // 判断是否闰年
            if (isRunNian(i)) {
                days += 366;
            } else {
                days += 365;
            }
        }

        System.out.println("到2024年一共有：" + days + "天");

        /*
         * 计算2024.1月到2024.10月多少天
         */
        for (int i = 1; i < 10; ++i) {
            switch (i) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    days += 31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    days += 30;
                    break;

                default:
                    if (isRunNian(2024)) {
                        days += 29;
                    } else {
                        days += 28;
                    }
                    break;
            }
        }
        System.out.println("到2024年9月底一共有：" + days + "天");

        days++;

        int xinqi = days % 7;
        System.out.println("2024年" + month + "月是星期：" + xinqi);

        System.out.println("星期日\t星期一\t星期二\t星期三\t星期四\t星期五\t星期六");
        // 根据观察可得： 星期几 前面有几个空格（占位符）
        // 空格（占位） ，占位符的个数 就是 星期n
        for (int i = 0; i < xinqi; i++) {
            System.out.print("\t");
        }

        // System.out.println(xinqi);
        int dayOfMonth = -1; // 定义当月有多少天
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            dayOfMonth = 31;
        } else if (month == 4 || month == 6 || month == 9 || month == 11)
            dayOfMonth = 30;
        else {
            if (isRunNian(2024))
                dayOfMonth = 29;
            else
                dayOfMonth = 28;
        }

        // 数字1-31(日期)
        for (int i = 1; i <= dayOfMonth; i++) {
            System.out.print(i + "\t");
            if ((xinqi + i) % 7 == 0) {
                System.out.println();// 回车
            }
        }

    }

    static boolean isRunNian(int num) {
        if ((num % 4 == 0 && num % 100 != 0) || num % 400 == 0)
            return true;
        else
            return false;
    }
}
