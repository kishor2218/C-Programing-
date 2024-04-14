
#include <stdio.h>
int fact(int num){
    if(num<=1){
        return num;
    }
    else
    {
    return num*fact(num-1);
    }
}

int main ()
{
   int n;
   scanf("%d",&n);
   int factorial=fact(n);
   printf("Factorial of %d is %d\n ",n,factorial);
   return 0;
}
