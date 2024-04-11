#include <stdio.h>
int main() {
    int ages[]={20,30,40,60,80};
    float sum=0,avg=0;
    int n=sizeof(ages)/sizeof(ages[0]);
    for(int i=0;i<n;i++){
        sum+=ages[i];
    }
    avg=sum/n;
    printf("sum is %.2f\n",sum);
    printf("the avg is %.2f\n",avg);
    return 0;
}
