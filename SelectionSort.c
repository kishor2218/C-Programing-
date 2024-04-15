
#include <stdio.h>
int main()
{
    int a[]={10,30,20,40,60,35,45,15};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_ind]){
                min_ind=j;
            }
            if(min_ind!=i){
                int temp=a[i];
                a[i]=a[min_ind];
                a[min_ind]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
