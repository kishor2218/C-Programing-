
#include <stdio.h>
int main ()
{
    int num, sum = 0,count=0;
    scanf("%d",&num);
    printf("The number is = %d\n",num);
    while(num!=0){
        sum += num % 10;
        num = num / 10;
        count+=1;
    }
 
    printf("Sum: %d\n",sum);
    printf("Number of digits: %d\n",count);
 
    return 0;

}
