import java.io.*;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(bufferedReader.readLine());

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < n - i; ++j) {
                bufferedWriter.write(' ');
            }
            for (int j = 0; j < i; ++j) {
                bufferedWriter.write('*');
            }
            bufferedWriter.write('\n');
        }


        bufferedWriter.flush();
    }
}