#include <stdio.h>

int main()
{    
    int count=0;
    char str[50];
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++)
    {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
     count++;
    }
    }
    printf("Number of Vowel %d",count);

    return 0;
}
