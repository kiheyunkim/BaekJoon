import java.io.*;
import java.util.Scanner;

public class Main {
    static public void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        for (int i = 0; i < n; ++i) {
            String input = scanner.next();
            int inputLength = input.length();
            int accum = 0;
            int answer = 0;
            for (int j = 0; j < inputLength; ++j) {
                if (input.charAt(j) == 'O') {
                    ++accum;
                    answer += accum;
                } else {
                    accum = 0;
                }
            }

            System.out.println(answer);
        }
    }
}
