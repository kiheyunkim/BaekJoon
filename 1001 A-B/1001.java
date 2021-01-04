import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * IDE : IntelliJ IDEA
 * Created by kiheyunkim@gmail.com on 2021-01-04
 * Github : http://github.com/kiheyunkim
 * Comment :
 */
public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String inputsLine = bufferedReader.readLine();

        String[] inputSplits = inputsLine.split(" ");
        System.out.println(Integer.parseInt(inputSplits[0]) - Integer.parseInt(inputSplits[1]));
    }
}
