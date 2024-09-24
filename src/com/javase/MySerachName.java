package com.javase;

import java.util.*;

public class MySerachName {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] names = new String[5];
        int start;
        int end;
        for (int i = 0; i < names.length; ++i) {
            System.out.print("请输入第" + (i + 1) + "个名字：");
            names[i] = input.nextLine();
        }
        System.out.print("请输入开始位置：");
        start = input.nextInt();
        System.out.print("请输入结束位置：");
        end = input.nextInt();
        input.close();
        for (String string : names) {
            System.out.println(string);
        }

        System.out.println(SearchName(names, start, end, "zh"));
    }

    public static int SearchName(String[] names, int start, int end, String name) {
        int position = -1;
        for (int i = start; i <= end; ++i) {
            if (names[i].equals(name)) {
                position = i;
            }
        }

        return position;
    }
}
