import java.io.*;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(bufferedReader.readLine());
        for (int i = 0; i < n; ++i) {
            String[] inputs = bufferedReader.readLine().split(" ");

            bufferedWriter.write((Integer.parseInt(inputs[0]) + Integer.parseInt((inputs[1]))) + "\n");
        }

        bufferedWriter.flush();
    }
}
