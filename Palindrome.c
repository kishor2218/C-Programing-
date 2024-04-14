int main ()
{
    int n, rem = 0,rev=0;
    scanf("%d",&n);
    printf("The number is = %d\n",n);
    int num=n;
    while(num!=0){
        rem= num % 10;
        rev=rev*10+rem;
        num = num / 10;
    }
    printf("Reverse of a Number: %d\n",rev);
    
    if (n==rev){
        printf("%d is Palindrome Number ",rev);
    }else{
        printf("%d is Not A Palindrome Number ",rev);
    }
    return 0;

}
