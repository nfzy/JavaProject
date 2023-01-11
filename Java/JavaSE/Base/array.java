package JavaSE.Base;

import java.util.Random;
import java.util.Scanner;

public class array {
    public static void main(String[] args) {
        /*
         * 完整：数据类型[] 数组名称 = new 数据类型[]{元素1, 元素2, ...};
         * 简化：数据类型[] 数组名称 = {元素1, 元素2, ...};
         */
        // double[] score = new double[] { 11.0, 2., 5.3 };
        double[] score = { 11.0, 200., 5.3, 3.5, -65, -320.2, 52.3 };

        // int[] ages = new int[] { 12, 32, 65 };
        int[] ages = new int[5];

        // String[] names = new String[] { "zhouan", "xdd", "zgl" };
        // String[] names = { "zhouan", "xdd", "zgl" };
        // System.out.println(score);

        double max = score[0];
        for (int i = 0; i < score.length; i++) {
            if (score[i] <= max)
                max = score[i];
        }
        System.out.println(max);

        Random random = new Random();
        for (int i = 0; i < ages.length; i++) {
            ages[i] = random.nextInt(20) + 1;
        }

        for (int i = 0; i < ages.length; i++) {
            System.out.print(ages[i] + " ");
        }

        Scanner iScanner = new Scanner(System.in);

        while (true) {
            System.out.println("请输入数字：");
            int iNum = iScanner.nextInt();
            for (int i = 0; i < ages.length; i++) {
                if (iNum == ages[i]) {
                    System.out.println(iNum + "在第" + i + "个索引");
                    iScanner.close();
                    break;
                }
            }
            System.out.println("猜测数字在数组中不存在！");
        }
    }
}
