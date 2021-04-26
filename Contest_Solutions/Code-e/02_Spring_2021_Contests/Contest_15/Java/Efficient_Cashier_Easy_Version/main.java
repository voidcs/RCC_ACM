import java.util.*;
public class main{
	public static void main( String[] args ){
		Scanner cin = new Scanner(System.in);
		int t = cin.nextInt();
		while(t > 0){
		    long n = cin.nextLong();
    		long ans = 0;
    		int[] coins = {25, 10, 5, 1};
    		for(int c: coins){
    		    ans += n / c;
    		    n %= c;
    		}
    		System.out.println(ans);
		    t--;
		}
	}
}