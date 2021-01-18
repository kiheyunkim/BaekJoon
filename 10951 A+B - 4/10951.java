import java.io.*;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        String inputLine;
        while ((inputLine = bufferedReader.readLine()) != null) {
            String[] inputs = inputLine.split(" ");
            int a = Integer.parseInt(inputs[0]);
            int b = Integer.parseInt(inputs[1]);

            bufferedWriter.write(String.format("%d\n", a + b));
        }

        bufferedWriter.flush();
    }
}
