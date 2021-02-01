import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;

public class Main {
    static private int[] checker = new int[20000 + 1];

    static void function(int number) {
        int sum = number;
        String numberStr = String.valueOf(number);
        int numberStrLen = numberStr.length();
        for (int i = 0; i < numberStrLen; ++i) {
            sum += (int) (numberStr.charAt(i) - '0');
        }

        checker[sum] = 1;
    }

    static public void main(String[] args) throws IOException {
        for (int i = 1; i <= 10000; ++i) {
            function(i);
        }

        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));
        for (int i = 1; i <= 10000; ++i) {
            if (checker[i] == 0) {
                bufferedWriter.write(String.valueOf(i));
                bufferedWriter.write('\n');
            }
        }

        bufferedWriter.flush();
    }
}
