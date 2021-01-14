import java.io.*;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(bufferedReader.readLine());

        for (int i = n; i > 0; --i) {
            bufferedWriter.write(String.valueOf(i) + '\n');
        }

        bufferedWriter.flush();
    }
}
