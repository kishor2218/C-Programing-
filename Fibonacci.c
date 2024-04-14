
#include <stdio.h>
int fib(int num){
    if(num<=1){
        return num;
    }
    else
    {
    return fib(num-1)+fib(num-2);
    }
}

int main ()
{
   int n;
   scanf("%d",&n);
   for (int i=0;i<=n;i++){
       int fibonacci=fib(i);
       printf("%d\n",fibonacci);
   }
   return 0;
}
