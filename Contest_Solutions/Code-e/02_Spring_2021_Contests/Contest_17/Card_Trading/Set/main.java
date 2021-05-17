import java.util.*;
public class main{
	public static void main( String[] args ){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t > 0){
		    String a = sc.next();
		    String b = sc.next(); 
		    HashSet<Character> s = new HashSet<Character>();
		    for(char c: a.toCharArray()){
		        s.add(c);
		    }
		    Boolean share = false;
		    for(char c: b.toCharArray()){
		        if(s.contains(c))
		            share = true;
		    }
		    if(share)
		        System.out.println("YES");
		    else    
		        System.out.println("NO");
		    t--;
		}
	}
}