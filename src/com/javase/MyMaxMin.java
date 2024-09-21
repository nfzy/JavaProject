package com.javase;

import java.util.Scanner;

public class MyMaxMin {
    public static void main(String[] args) {

        int[] nums = new int[5];
        System.out.print("请输入5个数字：");
        Scanner input = new Scanner(System.in);
        for (int i = 0; i < nums.length; ++i) {
            nums[i] = input.nextInt();
        }
        input.close();

        for (int i = 0; i < nums.length; i++) {
            System.out.println(nums[i]);
        }

        int MaxNum = nums[0];
        int MinNum = nums[0];
        for (int i = 0; i < nums.length; ++i) {
            if (MaxNum < nums[i]) {
                MaxNum = nums[i];
            }
        }

        for (int i = 0; i < nums.length; ++i) {
            if (MinNum > nums[i]) {
                MinNum = nums[i];
            }
        }
        System.out.println("MAX: " + MaxNum + " Min: " + MinNum);
    }
}
