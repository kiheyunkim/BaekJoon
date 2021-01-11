import java.io.IOException;
import java.util.Scanner;

public class Main {
    static public void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();

        if (x * y > 0) {
            if (x > 0) {
                System.out.println(1);
            } else {
                System.out.println(3);
            }
        } else {
            if (x > 0) {
                System.out.println(4);
            } else {
                System.out.println(2);
            }
        }
    }
}
