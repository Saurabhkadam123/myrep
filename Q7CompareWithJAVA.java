//Q7 wap to check if given string starts with "java"  return true otherwise return false.
package selfEvalutionLab2;

import java.util.Scanner;

public class Q7CompareWithJAVA {
	Scanner s=new Scanner(System.in);
	String str;
	boolean checkjava()
	{
		System.out.println("enter the string....");
		str=s.nextLine();
		String st="java";
		if(str.substring(0,4).equals(st))
			return true;
		else 
			return false;			
	}
	

	public static void main(String[] args) {
		Q7CompareWithJAVA q7=new Q7CompareWithJAVA();
		
		System.out.println("String starts with 'java' or not?=>"+q7.checkjava());

	}

}
