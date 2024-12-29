
import java.io.*;

public class Main {

   
    static void solve(long n, long k) {
        System.out.println(n * k - (k - 1));
    }

    public static void main(String[] args) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        
        while (t-- > 0) {
            String[] input = br.readLine().split(" ");
            long n = Long.parseLong(input[0]);
            long k = Long.parseLong(input[1]);
            solve(n, k);
        }
    }
}
