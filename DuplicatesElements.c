#include <stdio.h>

int main()
{
    int i,j,n ,count=1;
    printf("enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0;i<n;i++){
        if(b[i]==0){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                b[j]=1;
            }
        }
        if(count>1){
       printf("%d Is repeated %d times",a[i],count);
        }}
    }
    return 0;
}
