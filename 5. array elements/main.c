#include <stdio.h>
int main()
{
   int arr1[25], i,n;
   printf("\n\n Pointer : Store and retrieve elements from an array :\n"); 
   printf("------------------------------------------------------------\n");    
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("\tElement - %d : ",i);
	  scanf("%d",&arr1[i]);
	  }
   printf("--------------------------------\n");     
   printf(" The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf("\tElement - %d : %d \n",i,*(arr1+i));
	  }
	   return 0;
}
