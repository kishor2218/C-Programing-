#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    if(c>='a'&&c<='z'||c>='A'&&c<='Z'){
        printf("%c is Alphabet",c);
    }else{
        printf("%c is Not Alphabet",c);
    }

    return 0;
}
