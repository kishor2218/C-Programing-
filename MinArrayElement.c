#include <stdio.h>
int main ()
{
   int arr[]={10,30,40,20,45,25};
   int n=sizeof(arr)/sizeof(arr[0]);
   int min=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]<min){
           min=arr[i];
       }
   }
   printf("Minimum Element in an array is %d\n",min);
   return 0;
}
