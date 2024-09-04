#include <stdio.h>

int main(){
     int n;
    int a=1;
    int b=0;
    int num;
    printf("how many terms:");
    scanf("%d",&n);
    if(n<1){
        printf("invalid no of terms");
        return 0;
        }
    for(int i=1;i<=n;i++){
        if(i>2){
            num=a+b;
            b=a;
            a=num;
            printf("%d\n",num);
        }
        if(i==1){
            printf("%d\n",b);
        }
        if(i==2){
            printf("%d\n",a);
        }
    }
    return 0;
}