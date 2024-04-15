#include <stdio.h>

int main()
{
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array elements after sorting:");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
