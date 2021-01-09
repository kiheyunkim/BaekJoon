import java.io.IOException;
import java.util.Scanner;

public class Main {
    static public void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        int temp = b;
        while (temp != 0) {
            System.out.println(a * (temp % 10));
            temp /= 10;
        }
        System.out.println(a * b);
    }
}
