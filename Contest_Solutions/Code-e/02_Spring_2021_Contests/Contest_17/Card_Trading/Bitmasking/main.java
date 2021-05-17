import java.util.*;
public class main{
	public static void main( String[] args ){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t > 0){
		    String a = sc.next();
		    String b = sc.next(); 
		    int x = 0;
		    int y = 0;
		    for(char c: a.toCharArray())
		        x |= 1 << (c - 'a');
		    
		    for(char c: b.toCharArray())
		        y |= 1 << (c - 'a');
		    if((x&y) != 0)
		        System.out.println("YES");
		    else    
		        System.out.println("NO");
		    t--;
		}
	}
}