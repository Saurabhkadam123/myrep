/*write program in c to accept a grade and declare the equivalant description
*/
#include<stdio.h>
#include<ctype.h>

int main()
{
    char grade;
    printf("enter the grade of student:\n");
    scanf("%ch",&grade);
    grade=toupper(grade);
    switch (grade)
    {
    case 'E':
        printf("excellent");
        break;
    case 'V':
        printf("very good");
        break;
    case 'G':
        printf("good");
        break;
    case 'A':
        printf("average");
        break;
    case 'F':
        printf("fail");
        break;
    
    default:
        printf("invalid");
        break;
    }
    return 0;
}