#include <stdio.h>
#include<math.h>

int length(int n){
    int len=0;
    while(n!=0){
        len++;
        n/=10;
    }
    return len;
}

int armstrong(int num,int len){
    int rem=0;
    if (num==0){
        return 0;
    }else{
        while(num>0){
        rem=num%10;
        return pow(rem,len)+armstrong(num/10,len);
        }
    }
}

int main ()
{
    int num,len;
    scanf("%d",&num);
    printf("The number is = %d\n",num);
    len=length(num);
    if(armstrong(num,len)==num){
        printf("%d is Armstrong",num);
    }else{
        printf("%d is not Armstrong",num);
    }
    return 0;
}
