import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String inputs = bufferedReader.readLine();
        String[] inputSplits = inputs.split(" ");

        System.out.println(Integer.parseInt(inputSplits[0]) + Integer.parseInt(inputSplits[1]));
        System.out.println(Integer.parseInt(inputSplits[0]) - Integer.parseInt(inputSplits[1]));
        System.out.println(Integer.parseInt(inputSplits[0]) * Integer.parseInt(inputSplits[1]));
        System.out.println(Integer.parseInt(inputSplits[0]) / Integer.parseInt(inputSplits[1]));
        System.out.println(Integer.parseInt(inputSplits[0]) % Integer.parseInt(inputSplits[1]));
    }
}
