import java.io.*;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));
        String[] inputLines = bufferedReader.readLine().split(" ");

        int n = Integer.parseInt(inputLines[0]);
        int x = Integer.parseInt(inputLines[1]);

        String[] inputs = bufferedReader.readLine().split(" ");
        for (int i = 0; i < n; ++i) {
            int number = Integer.parseInt(inputs[i]);
            if (number < x) {
                bufferedWriter.write(String.format("%d ", number));
            }
        }
        bufferedWriter.write('\n');
        bufferedWriter.flush();
    }
}
