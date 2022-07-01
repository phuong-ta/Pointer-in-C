#include <stdio.h>

void total (int *p1, int *p2)
{   
    printf("\t  ---------------------------\n"); 
    printf("\t  Sum of two numbers %d\n", *p1+*p2);  
}
int main()
{
    int num1, num2;
    printf("Sum Of Two Number\n");
    printf("\t+ Enter first number  ");  
    scanf("%d",&num1);
    printf("\t+ Enter second number "); 
    scanf("%d",&num2);
    total(&num1, &num2);
    return 0;
}
