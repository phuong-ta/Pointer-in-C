#include <stdio.h>
int main()
{
    /* code */
    int* ab;
    float *cd;
    char *ef;
    int m=300;
    float n = 300.600006;;
    char o ='z';

    printf("---------------------------------------\n");
    printf("Using & operator :\n");
    printf("    + Address of m = %p\n", &m);
    printf("    + Address of n = %p\n", &n);
    printf("    + Address of o = %p\n", &o);

    printf("---------------------------------------\n");
    printf("Using & and * operator :\n");
    printf("    + Value at address of m = %d\n", *(&m));
    printf("    + Value at address of n = %f\n", *(&n));
    printf("    + Value at address of o = %c\n", *(&o));

    printf("---------------------------------------\n");
    ab=&m;
    cd=&n;
    ef=&o;
    printf("Using only pointer variable :\n");
    printf("    + Address of m = %p\n",ab);
    printf("    + Address of n = %p\n",cd);
    printf("    + Address of o = %p\n",ef);
    
    printf("---------------------------------------\n");
    printf("Using only pointer operator :\n");
    printf("    + Value at address of m = %d\n", *ab);
    printf("    + Value at address of m = %f\n", *cd);
    printf("    + Value at address of m = %c\n", *ef);
    

    return 0;
}
