import java.util.Scanner;

public class ContestProposal {
    static final int N = 105;
    static int T, n;
    static int[] a = new int[N];
    static int[] b = new int[N];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();
        while (T-- > 0) {
            n = sc.nextInt();
            for (int i = 1; i <= n; i++) {
                a[i] = sc.nextInt();
            }
            for (int i = 1; i <= n; i++) {
                b[i] = sc.nextInt();
            }
            int diff = 0, ans = 0;
            for (int i = 1; i <= n; i++) {
                if (a[i - diff] > b[i]) {
                    ans++;
                    diff++;
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
