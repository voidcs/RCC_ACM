import java.util.*;

public class main{
	public static void main( String[] args ){
		Scanner cin = new Scanner(System.in);
		int t = cin.nextInt();
		while(t > 0){
		    int n = cin.nextInt();
		    int[] a = new int[n];
		    for(int i = 0; i < n; i++)
		        a[i] = cin.nextInt();
		    int ans = (int)-1e8, sum = 0;
		    for(int i = 0; i < n; i++){
		        sum = Math.max(sum + a[i], a[i]);
		        ans = Math.max(ans, sum);
		    }
		    System.out.println(ans);
		    t--;
		}
	}
}