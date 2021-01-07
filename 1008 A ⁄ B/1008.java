import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String inputs = bufferedReader.readLine();
        String[] inputSplits = inputs.split(" ");

        System.out.println(Double.parseDouble(inputSplits[0]) / Double.parseDouble(inputSplits[1]));
    }
}
