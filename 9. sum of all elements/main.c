#include <stdio.h>
void countSum(int *arr, int length){
    int sum =0;
    for (int i = 0; i < length; i++)
    {
        /* code */
        sum+=arr[i];
    }
    printf("total in function is %d\n", sum);
}
int main()
{
    /* code */
    int elements, sum =0;
    int arr[10];
    int *pt;
    printf("Input the number of elements to store in the array (max 10) : ");
    scanf("%d", &elements);
    printf("Input %d number of elements in the array :\n",elements);

    for (int i = 0; i < elements; i++)
    {
        printf("Enter element %d - ",i);
        scanf("%d", &arr[i]);
    }
    // use pointer function
    countSum(arr,elements);

    // use pointer
    pt = arr;
    for (int i = 0; i < elements; i++)
    {
        sum+=*pt;
        pt++;
    }
    printf("total is %d\n", sum);
    return 0;
}
