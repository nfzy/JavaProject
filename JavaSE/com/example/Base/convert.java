package JavaSE.com.example.Base;

/**
 * convert
 * 类型转换
 * 1. 自动类型转换：类型范围小的变量，直接赋值给类型范围大的变量
 * byte -> short -> int -> long -> float -> double
 * 2. 表达式的自动类型转换：
 * - 最终结果类型由表达式中的最高类型决定
 * - byte、short、char是直接转换成int类型参与运算
 * 3. 强制类型转换：大范围变量赋值给范围小的变量
 * 可能出现数据丢失
 * 小数转换成整数是直接截断小数保留整数
 * 
 */
public class convert {
    public static void main(String[] args) {
        byte b = 66; // 8位
        int i = b; // 32位
        System.out.println(b + " " + i);

        double d = 1.3;
        double result = b + i + d;
        System.out.println(result);
        double result2 = 5 + 3 - 3.0;
        System.out.println(result2);

        byte b1 = 1;
        byte b2 = 2;
        // byte b3 = b1 + b2; // 应该是int类型数值
        int b3 = b1 + b2;
        System.out.println(b3);

        int a = 128;
        byte bb = (byte) a;
        System.out.println(bb);

        double dd = 3.9999999;
        System.out.println((int) dd);

    }

}