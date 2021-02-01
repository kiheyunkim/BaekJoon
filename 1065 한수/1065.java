import java.io.IOException;
import java.util.Scanner;

public class Main {
    static public void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] counter = new int[n + 1];

        for (int i = 1; i <= n; ++i) {
            if (i < 100) {
                counter[i] = counter[i - 1] + 1;
            } else {
                String numberStr = String.valueOf(i);
                int numberStrLen = numberStr.length();
                int diff = numberStr.charAt(1) - numberStr.charAt(0);
                boolean isOk = true;
                for (int j = 1; j < numberStrLen; ++j) {
                    if (numberStr.charAt(j) - numberStr.charAt(j - 1) != diff) {
                        isOk = false;
                        break;
                    }
                }

                counter[i] = isOk ? counter[i - 1] + 1 : counter[i - 1];
            }
        }
        System.out.println(counter[n]);
    }
}
