
int main()
{    
    int count=0,len=0;
    char str[50];
    scanf("%s",&str);
    char rev[100];
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
    int j=count-1;
    for(int i=0;i<count;i++){
        rev[i]=str[j];
        j--;
    }
    printf("%s",rev);
    return 0;
}
