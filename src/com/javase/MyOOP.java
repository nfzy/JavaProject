package com.javase;

import java.util.*;

public class MyOOP {
    public static void main(String[] args) {
        MyOOPClass moc = new MyOOPClass();
        moc.inputScore();
        System.out.println("Sum is: " + moc.CalcSum());
        System.out.println("Avg is: " + moc.CalcAvg());

        ;
    }
}

class MyOOPClass {

    int ScroeSql;
    int ScroeC;
    int ScroeJava;

    public void inputScore() {
        Scanner input = new Scanner(System.in);
        System.out.println("请输入JAVA：");
        ScroeJava = input.nextInt();
        System.out.println("请输入SQL：");
        ScroeSql = input.nextInt();
        System.out.println("请输入C：");
        ScroeC = input.nextInt();
        input.close();
    }

    public double CalcAvg() {
        return CalcSum() / 3;
    }

    public int CalcSum() {
        return ScroeC + ScroeSql + ScroeJava;
    }
}
