#include<stdio.h>

int main(){
    int num,original_num;
    int rev_num=0;
    printf("enter number:");
    scanf("%d",&num);
    original_num=num;
    while(num>0){
        rev_num=rev_num*10+num%10;
        num=num/10;
    }
    printf("%d\n",rev_num);
    if(rev_num==original_num) {
        printf("the number is palindrome");
    }else{
        printf("not palindrome");
    }
    return 0;
}