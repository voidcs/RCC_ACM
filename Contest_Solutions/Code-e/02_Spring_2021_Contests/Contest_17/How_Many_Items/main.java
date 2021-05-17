import java.util.*;
public class main{
	public static void main( String[] args ){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t > 0){
		    String str = sc.nextLine();
		    HashSet<Character> s = new HashSet<Character>();
		    for(char c: str.toCharArray()){
		        if(Character.isLetter(c))
		            s.add(c);
		    }
		    System.out.println(s.size());
		    t--;
		}
	}
}