import java.util.*;
public class main{
	public static void main(String[] args ){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		Set<String> s = new HashSet<String>();
		for(int i = 0; i < n; i++){
		    String str = sc.next();
		    if(s.contains(str))
		        System.out.println("YES");
		    else   
		        System.out.println("NO");
		    s.add(str);
		}
	}
}