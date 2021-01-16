import java.io.*;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));
        int testCount = Integer.parseInt(bufferedReader.readLine());

        for (int i = 0; i < testCount; ++i) {
            String[] inputSplits = bufferedReader.readLine().split(" ");
            int a = Integer.parseInt(inputSplits[0]);
            int b = Integer.parseInt(inputSplits[1]);
            bufferedWriter.write(String.format("Case #%d: %d\n", i + 1, a + b));
        }

        bufferedWriter.flush();
    }
}
