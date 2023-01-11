package JavaSE.Base;

/*
 * 
 *  需求：一个三位数，将其拆分成个位、十位、百位后，打印控制台。
 * 
 */
public class data_split {
    public static void main(String[] args) {
        int a = 907;
        int i1 = a / 100; // 百
        int i2 = a % 100 / 10; // 十
        int i3 = a % 10; // 个
        System.out.println(i1 + " " + i2 + " " + i3);

        int c = 10;
        int d = 5;

        int r = c++ + ++c - --d - ++d + 1 + c--;
        /*
         * c 10 11 12 11
         * d 5 4 5
         * r 10 + 12 - 4 - 5 + 1 + 12 = 26
         */

        System.out.println(c + " " + d + " " + r);

    }
}
