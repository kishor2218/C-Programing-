
#include <stdio.h>

int main ()
{
   int arr[]={10,30,40,20,45,25};
   int n=sizeof(arr)/sizeof(arr[0]);
   int sum=0;
   for(int i=n-1;i>=0;i--)
       {
       printf("%d ",arr[i]);
       }
    return 0;
}
