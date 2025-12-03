#include <stdio.h>

int main() {
    int num, count[10]={0}, i;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        int d=temp%10;
        count[d]++;
        temp/=10;
    }
    int maxCount=0, digit=0;
    for(i=0;i<10;i++){
        if(count[i]>maxCount){
            maxCount=count[i];
            digit=i;
        }
    }
    printf("Digit that occurs most: %d\n", digit);
    return 0;
}
