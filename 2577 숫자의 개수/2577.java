import java.io.*;
import java.util.Scanner;

public class Main {
    static public void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int numbers = 1;
        for (int i = 0; i < 3; ++i) {
            numbers *= scanner.nextInt();
        }

        int[] answer = new int[10];
        String numberStr = String.valueOf(numbers);
        int numberStrLen = numberStr.length();
        for (int i = 0; i < numberStrLen; ++i) {
            ++answer[((int) numberStr.charAt(i) - (int) '0')];
        }

        for (int i = 0; i < 10; ++i) {
            System.out.println(answer[i]);
        }
    }
}
