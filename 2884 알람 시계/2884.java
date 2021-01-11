import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static public void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String input = bufferedReader.readLine();

        String[] inputSplits = input.split(" ");
        int hour = Integer.parseInt(inputSplits[0]);
        int minutes = Integer.parseInt(inputSplits[1]);

        if (minutes - 45 < 0) {
            hour -= 1;
            minutes += 60;
        }
        minutes -= 45;

        if (hour < 0) {
            hour = 23;
        }

        System.out.printf("%d %d", hour, minutes);
    }
}
