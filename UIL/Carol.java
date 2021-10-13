import java.io.*;
import java.util.*;
import java.lang.*;
public class Carol {

    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("carol.dat"));

        int N; 
        N = sc.nextInt();
        sc.nextLine();
        for(int t = 0; t < N; t++){
            String s; s = sc.nextLine();
            // int n = s.length();
            // int[] dp = new int[n];
            // int i = 0, j = 0;
            // for(i = 0; i < n; i++) dp[i] = 0;
            // i = 0;

            // for(i = 0, j = n - 1; i <= j; i++, j--){
            //     if(s.charAt(i) != s.charAt(j)){
            //         break;
            //     }
            // }
            // if(i > j){
            //     System.out.println(0);
            //     continue;
            // }

            // for(i = n - 2; i >= 0; i--){
            //     int pref = 0; 
            //     for(j = i + 1; j < n; j++){
            //         int tmp = dp[j];
            //         if(s.charAt(i) == s.charAt(j)){
            //             dp[j] = pref;
            //         }
            //         else{
            //             dp[j] = Math.min(dp[j], dp[j - 1]) + 1;
            //         }
            //         pref = tmp;
            //     }
            // }
            // System.out.println(dp[n - 1]);
            s = s.toLowerCase();
            int n = s.length();
            int[][] dp = new int[n][n];
            for(int u = 0; u < n; u++){
                for(int v = 0; v < n; v++){
                    dp[u][v] = 0;
                }
            }
            for(int u = n - 1; u >= 0; u--){
                for(int v = u; v < n; v++){
                    if(u >= v) dp[u][v] = 0;
                    else if(s.charAt(u) == s.charAt(v)) dp[u][v] = dp[u + 1][v - 1];
                    else dp[u][v] = 1 + Math.min(dp[u + 1][v], dp[u][v - 1]);
                }
            }
            System.out.println(dp[0][n - 1]);
        }
        

    }
}
