import java.util.Scanner;

public class longest {
	
public static void main(String[] args)
{
	Scanner scr = new Scanner(System.in);
	String str = scr.next();
	String longestSubString="";
	for(int a=1; a<str.length(); a++)
	{
		int b=str.charAt(a)-str.charAt(a-1);
		if(b>0)
		{
			longestSubString = str.substring(a);
			break;
		}
	}
	if(longestSubString.length()==0)
	{
		System.out.println("No longest SubString");
	}
	else
		System.out.println("Longest SubString is: "+longestSubString);
}
}



