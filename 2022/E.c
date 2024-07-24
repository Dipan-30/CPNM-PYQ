#include<stdio.h>

int main(){
    int count = 1,flag = 1,n = 2;
    while(count<=100){
        flag = 1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }
        if(flag){
            printf("%d ", n);
            count++;
        }
        n++;
    }

}