#include <stdio.h>

int main()
{    
    int count=0;
    char str[50];
    scanf("%s",&str);
    int l=0;
    int h=strlen(str)-1;
    while(h>l){
        if(str[l++]!=str[h--]){
            printf("%s Not Palindrome",str);
            return 0;
        }
    }
    printf("%s Palindrome",str);

    return 0;
}
