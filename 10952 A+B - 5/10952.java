import java.io.*;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        while (true) {
            String[] inputLines = bufferedReader.readLine().split(" ");
            int a = Integer.parseInt(inputLines[0]);
            int b = Integer.parseInt(inputLines[1]);
            if (a == 0 && b == 0) {
                break;
            }

            bufferedWriter.write(String.format("%d\n", a + b));
        }

        bufferedWriter.flush();
    }
}
