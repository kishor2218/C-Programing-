
#include <stdio.h>
int order(int a[],int n)
   {
    for(int i=0;i<n;i++){
        for(int j=0;j<=n/2;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
        for(int j=n/2;j<n;j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }  
   }
int main()
{
    int arr[]={10,30,20,40,60,35,45,15};
    int size=sizeof(arr)/sizeof(arr[0]);
    order(arr,size);
    return 0;
}
