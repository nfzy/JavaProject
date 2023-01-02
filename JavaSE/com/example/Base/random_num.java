package JavaSE.com.example.Base;

import java.util.Random;

public class random_num {
    public static void main(String[] args) {
        /* 
         * 生成m-n之间的数字
         * (m - n + 1) + m
         * 
         * */
        Random random = new Random();
        for (int i = 0; i < 100; i++) {
            System.out.println(random.nextInt(17) + 65);
        }
    }
}
