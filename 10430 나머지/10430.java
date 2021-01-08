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
        int c = Integer.parseInt(inputSplits[2]);

        System.out.println((a + b) % c);
        System.out.println(((a % c) + (b % c)) % c);
        System.out.println((a * b) % c);
        System.out.println(((a % c) * (b % c)) % c);
    }
}
