import java.io.*;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(bufferedReader.readLine());
        String[] dataArray = bufferedReader.readLine().split(" ");
        int min = 987654321;
        int max = -987654321;
        for (int i = 0; i < n; ++i) {
            int number = Integer.parseInt(dataArray[i]);
            min = Math.min(number, min);
            max = Math.max(number, max);
        }

        bufferedWriter.write(String.format("%d %d\n", min, max));
        bufferedWriter.flush();
    }
}
