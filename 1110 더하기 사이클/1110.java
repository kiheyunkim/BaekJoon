import java.io.*;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(bufferedReader.readLine());
        int origin = n;
        int answer = 0;
        while (true) {
            n = ((n % 10) * 10) + (((n / 10) + (n % 10)) % 10);
            ++answer;

            if (origin == n) {
                break;
            }
        }

        bufferedWriter.write(String.valueOf(answer) + "\n");
        bufferedWriter.flush();
    }
}