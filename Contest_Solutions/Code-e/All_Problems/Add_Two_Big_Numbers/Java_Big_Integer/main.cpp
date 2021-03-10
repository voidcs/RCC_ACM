import java.math.BigInteger;
import java.util.Scanner;

public class main{
    public static void main(String[] args ){
        Scanner cin = new Scanner(System.in);
        
        int t = cin.nextInt();
        for(int i = 0; i < t; i++){
            int n = cin.nextInt();
            BigInteger ans = BigInteger.valueOf(0);
            
            for(int j = 0; j < n; j++) {
                ans = ans.add(cin.nextBigInteger());
            }
            
            System.out.println(ans);
        }
    }
}