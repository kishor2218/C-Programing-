#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>=0){
        printf("%d is a Positive number",num);
    }else{
        printf("%d is a Negitive number",num);
    }
    return 0;
}
