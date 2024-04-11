#include <stdio.h>
int main() {
    int num1,num2;
    printf("Enter a number1:");
    scanf("%d",&num1);
    printf("Enter a number2:");
    scanf("%d",&num2);
    if (num1==num2){
        printf("Equal");
    }
    else if(num1>num2){
        printf("%d is Greater",num1);
    }else{
        printf("%d is Greater",num2);
    }
    return 0;
}
