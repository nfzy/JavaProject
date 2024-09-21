package com.javase;


public class MyNewArray {
    public static void main(String[] args) {
        int[] nums = { 24, 99, 108, -23, 63 };

        int[] newnums = new int[nums.length + 1];
        for (int i = 0; i < nums.length; ++i) {
            newnums[i] = nums[i];
        }

        // 如果没有比他大的数字，则默认在最后插入
        int position = newnums.length - 1;
        int num = 999;

        for (int i = 0; i < newnums.length; i++) {
            if (newnums[i] > num) {
                position = i;
                break;
            }
        }
        System.out.println("插入的位置索引：" + position);

        // 插入后平移数组
        for (int i = newnums.length - 2; i >= position; --i) {
            newnums[i + 1] = newnums[i];
        }

        newnums[position] = num;
        for (int i = 0; i < newnums.length; i++) {
            System.out.println(newnums[i]);
        }
    }
}