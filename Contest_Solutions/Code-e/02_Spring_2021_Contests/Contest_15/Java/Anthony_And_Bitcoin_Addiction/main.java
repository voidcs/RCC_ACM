import java.util.*;

public class main{
	public static void main( String[] args ){
	    Scanner sc = new Scanner(System.in);
	    int t = sc.nextInt();
	    while(t > 0){
	        long n = sc.nextInt();
	        boolean prime = true;
	        for(int i = 2; i*i <= n; i++){
	            if(n % i == 0)
	                prime = false;
	        }
	        if(prime)
	            System.out.println("BUY");
	        else   
	            System.out.println("WAIT");
	        t--;
	    }
	}
}