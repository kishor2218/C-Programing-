#include <stdio.h>
#include <limits.h>
int main ()
{
   int arr[]={10,30,40,20,45,25};
   int n=sizeof(arr)/sizeof(arr[0]);
   int smallest=arr[0];
   int secSmallest=INT_MAX;
   for(int i=0;i<n;i++){
       if(arr[i]<smallest){
           secSmallest=smallest;
           smallest=arr[i];
       }
       else if(arr[i]<secSmallest&&arr[i]!=smallest){
           secSmallest=arr[i];
       }
   }
   printf("Smallest:%d\n",smallest);
   printf("SecondSmallest:%d\n",secSmallest);
   return 0;
}
