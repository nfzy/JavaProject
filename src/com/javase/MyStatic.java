package com.javase;

public class MyStatic {
    public static void main(String[] args) {
        MyStaticClass msc = new MyStaticClass();
        msc.MyStaticMethod2();
        msc.MyStaticMethod4();
    }
}

class MyStaticClass {

    /*
     * 静态方法调用：
     * 1. 方法之间都不是static可以相互调用
     * 2. static方法不能调用非static方法
     * 3. 非static方法可以调用static方法
     * 
     */
    public void MyStaticMethod1() {
        System.out.println("static method first!");
    }

    public void MyStaticMethod2() {
        MyStaticMethod1();
        System.out.println("static method second!");

    }

    public static void MyStaticMethod3() {
        System.out.println("static method third!");
    }

    public void MyStaticMethod4() {
        MyStaticMethod3();
        System.out.println("static method forth!");
    }
}
