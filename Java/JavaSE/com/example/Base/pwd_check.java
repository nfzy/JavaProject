package JavaSE.com.example.Base;

import java.util.Scanner;

public class pwd_check {
    public static void main(String[] args) {
        Scanner inPut = new Scanner(System.in);

        do {
            System.out.print("请输入密码：");
            int pwd = inPut.nextInt();
            if (pwd == 520) {
                System.out.println("密码正确，退出！");
                inPut.close();
                break;
            } else
                System.out.println("密码错误");

        } while (true);

    }
}
