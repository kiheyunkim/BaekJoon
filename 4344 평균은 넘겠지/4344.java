import java.io.*;
import java.util.Scanner;

public class Main {
    static public void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int testCount = scanner.nextInt();

        for (int i = 0; i < testCount; ++i) {
            float n = scanner.nextInt();
            float[] scoreArray = new float[(int)n];
            float avg = 0;
            for (int j = 0; j < n; ++j) {
                scoreArray[j] = scanner.nextInt();
                avg += scoreArray[j];
            }

            avg /= n;
            float count = 0;
            for (int j = 0; j < n; ++j) {
                if (avg < scoreArray[j]) {
                    ++count;
                }
            }

            System.out.printf("%.3f%%\n", count / n * 100);
        }
    }
}
