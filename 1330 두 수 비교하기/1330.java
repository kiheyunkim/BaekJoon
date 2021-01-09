import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String inputs = bufferedReader.readLine();
        String[] inputSplits = inputs.split(" ");

        int a = Integer.parseInt(inputSplits[0]);
        int b = Integer.parseInt(inputSplits[1]);
        if (a > b) {
            System.out.println(">");
        } else if (a < b) {
            System.out.println("<");
        } else {
            System.out.println("==");
        }
    }
}
