#include<stdio.h>
int main(){
    //Anchal kumari
    //10186
    int n, sum=0;
    printf("enter a number:");
    scanf("%d", &n);
    for(int i=1; i <= n; i++){
        if(i%2!=0){
            continue;
        }
        sum=sum+i;
    }
    printf("sum of even numbers = %d", sum);
    return 0;
}
//enter a number 1
//sum of even number = 0