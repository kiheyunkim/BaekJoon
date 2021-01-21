import java.io.*;
import java.util.Scanner;

public class Main {
    static public void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int[] numbers = new int[9];
        for (int i = 0; i < 9; ++i) {
            numbers[i] = scanner.nextInt();
        }

        int order = 0;
        int max = numbers[0];

        for (int i = 1; i < 9; ++i) {
            if (numbers[i] > max) {
                max = numbers[i];
                order = i;
            }
        }
        System.out.println(String.format("%d\n%d", max, order + 1));
    }
}
