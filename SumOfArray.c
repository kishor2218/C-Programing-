#include <stdio.h>
int main ()
{
   int arr[]={10,30,40,20,45,25};
   int n=sizeof(arr)/sizeof(arr[0]);
   int sum=0;
   for(int i=0;i<n;i++){
       sum=sum+arr[i];
       }
    printf("SUM: %d",sum);
    return 0;
}
