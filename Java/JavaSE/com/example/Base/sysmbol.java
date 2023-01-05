package JavaSE.com.example.Base;

/*
 *  整数之间做运算，结果一定是整数，因为最高类型是整数 
 *  有小数时会转换成小数形式运算。
 *  
 */

public class sysmbol {
    public static void main(String[] args) {
        int a = 10;
        int b = 3;
        System.out.println(a / b); // 3
        System.out.println(a % b); // 1
        System.out.println(a * 1.0 / b); // 3.3333.....
        System.out.println(a / b * 1.0); // 3.0

    }
}
