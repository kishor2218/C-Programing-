#include <stdio.h>
int main() {
    int num1,num2,sum=0;
    printf("Enter a number1:");
    scanf("%d",&num1);
    printf("Enter a number2:");
    scanf("%d",&num2);
    for(int i=num1;i<=num2;i++){
        sum+=i;
    }
    printf("Sum:%d",sum);
    return 0;
}
