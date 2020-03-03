import java.util.Scanner;

public class Quiz {
    public static void main(String[] args) {
        int num;
        int r = 0;
        Scanner in = new Scanner(System.in);
        do {
            System.out.print("정수를 입력하세요? ");
            num = in.nextInt();
            if (isEven(num)) {
                r += num;
            }
        } while (num > 0);
        System.out.printf("입력한 양의 정수 중에서 짝수의 합 = %d", r);
    }

    public static boolean isEven(int n) {
        if (n % 2 == 0)
            return true;

        else
            return false;
    }
}
