int main ()
{
   int arr[]={10,30,40,20,45,25};
   int n=sizeof(arr)/sizeof(arr[0]);
   int max=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]>max){
           max=arr[i];
       }
   }
   printf("Maximum Element in an array is %d\n",max);
   return 0;
}
