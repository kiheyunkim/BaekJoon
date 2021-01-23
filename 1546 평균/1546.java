import java.io.*;
import java.util.Scanner;

public class Main {
    static public void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        double[] scoreArray = new double[n];
        double max = -987654321;
        for(int i=0;i<n;++i){
            scoreArray[i] = scanner.nextDouble();
            max = Math.max(scoreArray[i], max);
        }

        for(int i=0;i<n;++i){
            scoreArray[i] = scoreArray[i] / max * 100;
        }

        double sum = 0;
        for(int i=0;i<n;++i){
            sum += scoreArray[i];
        }

        System.out.println(sum/n);
    }
}
