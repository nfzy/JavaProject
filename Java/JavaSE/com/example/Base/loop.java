package JavaSE.com.example.Base;

public class loop {
    public static void main(String[] args) {

        // 计算1-5的和
        int sum = 0;
        for (int i = 1; i <= 5; ++i) {
            sum += i;
        }
        System.out.println(sum);

        sum = 0;
        for (int i = 1; i <= 10; i += 2) {
            sum += i;
        }
        System.out.println(sum);

        int a, b, c;
        for (int i = 100; i < 1000; i++) {
            a = i / 100;
            b = i / 10 % 10;
            c = i % 10;
            if ((a * a * a + b * b * b + c * c * c) == i)
                System.out.print(i + "\t");
        }
    }
}
