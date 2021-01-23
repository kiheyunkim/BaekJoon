import java.io.*;
import java.util.Scanner;

public class Main {
    static public void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int[] dataArray = new int[10];
        for (int i = 0; i < 10; ++i) {
            dataArray[i] = scanner.nextInt();
        }

        int[] answerArray = new int[42];
        for (int i = 0; i < 10; ++i) {
            ++answerArray[dataArray[i] % 42];
        }

        int answer = 0;
        for (int i = 0; i < 42; ++i) {
            if (answerArray[i] > 0) {
                ++answer;
            }
        }

        System.out.println(answer);
    }
}
