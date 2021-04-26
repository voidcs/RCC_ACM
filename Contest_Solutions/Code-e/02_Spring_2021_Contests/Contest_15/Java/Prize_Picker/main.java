import java.util.*;

public class main{
	public static void main(String[] args){
		Scanner cin = new Scanner(System.in);
		int t = cin.nextInt();
		while(t > 0){
		    int n = cin.nextInt();
		    int[] a = new int[n];
		    for(int i = 0; i < n; i++)
		        a[i] = cin.nextInt();
		    Arrays.sort(a);
		    System.out.println(a[n-1] + a[n-2]);
		    t--;
		}
	}
}