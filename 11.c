/*
algo for display student five subject marks, total marks and percentage.

INPUT:
1.Start
2.enter the five subject marks w r to preference marathi-hindi-english-history-geography

PROCESS:
3.addition of 5 subject marks
4.convert to the percentage

OUTPUT:
5.print five subject marks saperately
6.print total marks
7.print percentage
*/

#include<stdio.h>

int main()
{
    int mar,hin,eng,hist,geo,sum,per;
    printf("enter the five subject marks out of 100 accordingly\nmarathi\nhindi\nenglish\nhistory\ngeography");
    scanf("%d%d%d%d%d",&mar,&hin,&eng,&hist,&geo);
    sum=mar+hin+eng+hist+geo;
    per=(sum/500);
    printf("total marks obtained out of 500 is:%d",sum);
    printf("percentage obtained:%d",per);
    return 0;

}