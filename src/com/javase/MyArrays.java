package com.javase;

public class MyArrays {
    public static void main(String[] args) {
        /*
         * 冒泡排序
         * 12 5 -65 21 1 99 2
         * 5 12 -65 21 1 99 2
         * 5 -65 12 21 1 99 2
         * 5 -65 12 21 1 99 2
         * 5 -65 12 1 21 99 2
         * 5 -65 12 1 21 2 99
         */

        int[] nums = { 12, 5, -65, 21, 1, 99, 2 };
        for (int i = 0; i < nums.length - 1; ++i) {

            for (int j = 0; j < nums.length - i - 1; ++j) {
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < nums.length; i++) {
            System.out.println(nums[i]);
        }

    }
}
