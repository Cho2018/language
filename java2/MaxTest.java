class Max<T extends Number> {
    T num1;
    T num2;

    static <T extends Number> T max (T num1, T num2) {
        return num1.intValue() > num2.intValue()? num1 : num2;
    }
}
public class MaxTest extends Max {
    public static void main(String[] args) {
        System.out.println(max(5, 6));
        System.out.println(max(7.0, 3.0));
        System.out.println(max(new Integer(8), new Integer(10)));
        System.out.println(max(new Double(5.0), new Integer(4)));
//        System.out.println(max(new String("hi"), new String("Hi")));
    }
}
