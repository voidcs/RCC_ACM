import java.util.*;
public class main{
	public static void main( String[] args ){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t > 0){
		    int n = sc.nextInt();
		    int x = sc.nextInt();
		    int[] a = new int[n];
		    for(int i = 0; i < n; i++)
		        a[i] = sc.nextInt();
		    boolean found = false;
		    for(int i = 0; i < n; i++){
		        for(int j = i+1; j < n; j++){
		            if(a[i] + a[j] == x)
		                found = true;
		        }
		    }
		    if(found)
	            System.out.println("YES");
	        else   
	            System.out.println("NO");
		    t--;
		}
	}
}