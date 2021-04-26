import java.util.*;
public class main{
	public static void main( String[] args ){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String s;
		s = sc.nextLine();
		s = sc.nextLine();
		String t = s;
		char [] temp = t.toCharArray();
		Arrays.sort(temp);
		t = new String(temp);
		int i = 0;
		while(s.charAt(i) == t.charAt(i))
		    i++;
		int index = -1;
		char c = 'z' + 1;
		for(int j = i+1; j < n; j++){
		    if(s.charAt(j) <= c){
		        c = s.charAt(j);
		        index = j;
		    }
		}
		StringBuilder ans = new StringBuilder(s);
		if(!s.equals(t)){
		    char x = s.charAt(i);
		    ans.setCharAt(i, s.charAt(index));
		    ans.setCharAt(index, x);
		}
		
		System.out.println(ans.toString());
	}
}