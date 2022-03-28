//Q4 wap to ask string from user and convert each letter to upper case
package selfEvalutionLab2;

import java.util.Scanner;

public class Q4StringUpperCase {
	String str;
	Scanner s=new Scanner(System.in);
	void converToUpperCase()
	{
		System.out.println("enter the string ...");
		str=s.nextLine();
		System.out.println("Before:"+str);
		System.out.println("After:"+str.toUpperCase());
	}

	public static void main(String[] args) {

		Q4StringUpperCase q4=new Q4StringUpperCase();
		q4.converToUpperCase();


	}

}
