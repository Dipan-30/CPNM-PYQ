#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d", &n);
    //rows
    for(int i=1;i<=n;i++){
        //space
        for(int s=1;s<=2*(n-i);s++){
             printf(" ");
        }
        //left triangel
        for(int j=1;j<=i;j++){
            printf("%d ", j);
        }
        //right triangel
        for(int k=i-1;k>=1;k--){
            printf("%d ", k);
        }
        printf("\n");
    }

}