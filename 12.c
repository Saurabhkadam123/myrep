/* Write an algo for the sum of cubes of the all digit (4 digit)

INPUT:
1.start
2.enter the four digit number


PROCESS:
3.select the rightmost digit 
4.calculate the cube
5.also calculate the cube for inner digit
6.make sumation of all cubes


O/P:
print
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num,num1,num2,num3,rem,rem1,rem2;
    int sum=0;
    int cube1,cube2,cube3,cube4;

    printf("enter the value\n");
    scanf("%d",&num);//4132

    rem=num%10;//2
    num1=num/10;//413
    rem1=num1%10;//3
    num2=num1/10;//41
    rem2=num2%10;//1
    num3=num2/10;//4
    cube1=rem*rem*rem;
    cube2=rem1*rem1*rem1;
    cube3=rem2*rem2*rem2;
    cube4=num3*num3*num3;

    sum=cube1+cube2+cube3+cube4;

    printf("sum all cube of the 4 digit no. is==>%d",sum);
    return 0;

}