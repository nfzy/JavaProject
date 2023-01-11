package JavaSE.Base;

public class big_num {
    public static void main(String[] args) {
        int a = 5;
        int b = 300;
        int c = 222;
        int temp = a > b ? a : b;
        temp = temp > c ? temp : c;
        System.out.println("最大值是："+temp);
    }
}
