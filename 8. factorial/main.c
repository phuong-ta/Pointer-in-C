#include <stdio.h>
void factorial(int *number){
    int result=1;
    for (int i = 1; i < *number+1; i++)
    {
        /* code */
        result*=i;
        printf("Step %d - factorial of %d = %d\n", i, i, result);
    }
    printf("---------------------------\n");
    printf("The Factorial of %d is : %d\n",*number, result);
}
int main()
{
    /* code */
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    printf("---------------------------\n");
    factorial(&number);
    printf("---------------------------\n");
    return 0;
}
