import java.util.*;

public class main{
	public static void main( String[] args ){
	    Scanner sc = new Scanner(System.in);
		HashMap<String, Integer> m = new HashMap<String, Integer>();
		int n = sc.nextInt();
		for(int i = 0; i < n; i++){
		    String s = sc.next();
		    m.merge(s, 1, Integer::sum);
            if(m.get(s) == 1)
                System.out.println("NO");
            else
                System.out.println("YES " + m.get(s));
		}
	}
}