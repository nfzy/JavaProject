package com.javase;

/**
 * MyStudent
 */
public class MyStudent {

    public static void main(String[] args) {
        Student stu1 = new Student();
        Student stu2 = new Student();
        Student stu3 = new Student();
        stu1.name = "周安";
        stu1.javaScore = 56;
        stu1.sqlScore = 75;

        stu2.name = "樟科院";
        stu2.javaScore = 506;
        stu2.sqlScore = 7150;

        stu3.name = "未来";
        stu3.javaScore = 56;
        stu3.sqlScore = 5;
        Student[] students = new Student[] { stu1, stu2, stu3 };


        System.out.println("排序之前");
        for (int i = 0; i < students.length; ++i) {
            System.out.println(students[i].name + "\t" + students[i].getAvg() + "\t" + students[i].getSum());

        }
        compare(students);

        System.out.println("排序之后");

        for (Student student : students) {
            System.out.println(student.name + "\t" + student.getAvg() + "\t" + student.getSum());
        }
    }

    public static void compare(Student[] student) {
        for (int i = 0; i < student.length; ++i) {
            for (int j = 0; j < student.length - 1; ++j) {
                if (student[j].getSum() < student[j + 1].getSum()) {
                    Student temp = student[j];
                    student[j] = student[j + 1];
                    student[j + 1] = temp;
                }
            }
        }
    }
}

class Student {
    String name;
    int javaScore;
    int sqlScore;

    public double getAvg() {
        return getSum() / 2;
    }

    public int getSum() {

        return javaScore + sqlScore;
    }
}