
#include <stdio.h>

int main()
{
    char str[50];
    int len=0;
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    printf("The length of String %d",len);
}
