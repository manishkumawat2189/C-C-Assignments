#include <stdio.h>
int main()
{
    int a,b,sum,diff,mult,div,mod;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of a and b is : %d",sum);
    diff=a-b;
    printf("\nDifference of a and b is : %d",diff);
    mult=a*b;
    printf("\nMultification of a and b is : %d",mult);
    div=a/b;
    printf("\nDivision of a and b is : %d",div);
    mod=a%b;
    printf("\nModulas of a and b is : %d",mod);
    return 0 ;
}
