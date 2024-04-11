int main() {
   int num,count=0;
   printf("Enter a number :");
   scanf("%d",&num);
   if(num==1||num==0){
       printf("%d is Not Prime",num);
   }
   for(int i=2;i<=num/2;i++){
       if(num%i==0){
           count+=1;
       }
   }
   if(count<2){
       printf("%d is  Prime ",num);
   }else{
       printf("%d  is Not Prime",num);
   }
   
    return 0;
}
