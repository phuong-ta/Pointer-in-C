#include <stdio.h>
void findMax(int *p1,int *p2){
    if (*p1>*p2)
    {
        printf("\t  ---------------------------\n"); 
        printf("\t+ Number one %d is max number\n", *p1); 
    } else
    {
        printf("\t  ---------------------------\n"); 
        printf("\t+ Number two %d is max number\n", *p2); 
    }
}

int main()
{
    /* code */
    int num1, num2;
    printf("Find max number\n");
    printf("\t+ Enter first number  ");  
    scanf("%d",&num1);
    printf("\t+ Enter second number "); 
    scanf("%d",&num2);
    findMax(&num1, &num2);
    return 0;
}
