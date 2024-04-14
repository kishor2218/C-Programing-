#include <stdio.h>
int main ()
{
    int num, rem = 0,rev=0;
    scanf("%d",&num);
    printf("The number is = %d\n",num);
    while(num!=0){
        rem= num % 10;
        rev=rev*10+rem;
        num = num / 10;
    }
 
    printf("Reverse of a Number: %d\n",rev);
    return 0;
}
