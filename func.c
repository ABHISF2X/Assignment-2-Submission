No return by the function and no value is passed
#include <stdio.h>

void func();   //Function Prototype

int main()
{
    
    int a,b,c;
    a=2;
    b=3;
    c=a+b;
    func();   //Function call
    printf("The result is %d\n",c);
    return 0;
}

void func()   //Function Defintion
{
     printf("Addition is done\n");
    
}   
