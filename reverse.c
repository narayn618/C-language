#include<stdio.h>

int main(){
    int num;
    int rev_num=0;
    printf("write number to be reversed:");
    scanf("%d",&num);

    while(num>0){
        rev_num=rev_num*10+num%10;
        num=num/10;
    }
    printf("reversed number is %d",rev_num);
    return 0;
}