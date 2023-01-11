package JavaSE.Base;

import java.util.Random;
import java.util.Scanner;

public class guess_num {
    public static void main(String[] args) {
        Scanner iScanner = new Scanner(System.in);
        Random random = new Random();
        int num = random.nextInt(100) + 1;
        System.out.print("请输入一个数字(1-100)：");
        System.out.println(num);

        while (true) {
            int guess_num = iScanner.nextInt();
            if (guess_num == num) {
                System.out.println("猜对了！");
                break;
            } else if (guess_num > num)
                System.out.print("猜大了！请重新输入：");
            else
                System.out.print("猜小了！请重新输入：");
        }
        iScanner.close();
    }
}
