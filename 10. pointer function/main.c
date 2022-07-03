#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a, int b, char stringOne)
{
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
    printf("Sum of %d + %d = %d\n", a, b, a+b);
    printf("%c",stringOne);
}

int main()
{
    // fun_ptr is a pointer to function fun() 
    void (*fun_ptr)(int, int, char) = &fun;
  
    /* The above line is equivalent of following two
       void (*fun_ptr)(int);
       fun_ptr = &fun; 
    */
  
    // Invoking fun() using fun_ptr
    (*fun_ptr)(10,5, 'p');

  
    return 0;
}