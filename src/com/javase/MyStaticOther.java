package com.javase;

public class MyStaticOther {
    public static void main(String[] args) {

        /*
         * 类只能调用static
         * 对象new出来后无论是不是static都可以调用
         * 
         */

        MyStaticClass msc = new MyStaticClass();
        System.out.print("msc.MyStaticMethod1(): ");
        msc.MyStaticMethod1();
        System.out.print("msc.MyStaticMethod2(): ");
        msc.MyStaticMethod2();
        System.out.print("msc.MyStaticMethod3(): ");
        MyStaticClass.MyStaticMethod3();
        // msc.MyStaticMethod3(); // 不建议这么写
        System.out.print("msc.MyStaticMethod4(): ");
        msc.MyStaticMethod4();
    }

    ;
}