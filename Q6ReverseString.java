//Q 6 wap to reverse given string without using any reverse method 

package selfEvalutionLab2;

import java.util.Scanner;

public class Q6ReverseString {
	String str;
	Scanner s=new Scanner(System.in);
	void reverseString()
	{
		System.out.println("enter the String...");
		str=s.nextLine();
		String newstr="";
		int len=str.length();
		for(int i=len-1;i>=0;i--)
		{
			newstr+=str.substring(i,i+1);
		}
		System.out.println(newstr);
		
	}
	public static void main(String[] args) {
		Q6ReverseString q6=new Q6ReverseString();
		q6.reverseString();

	}

}
