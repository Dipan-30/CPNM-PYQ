#include <stdio.h>

int main() {
char str[100];
printf("Enter a string: ");
scanf("%[^\n]s", str);
int length =0,flag=0;
for(int i=0;str[i]!='\0';i++){
    length++;
}
for(int i=0;i<length;i++){
    if(str[i]!=str[length-i-1]){
        flag=1;
        break;
    }
}
    if(flag==0){
        printf("string is a palindrome");
    }
    else{
        printf("string is not a palindrome");
    }

    return 0;
}
