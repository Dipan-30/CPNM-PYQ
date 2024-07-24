#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);

    int count=0,i=0;
    if(str[1]=='\0'){
        printf("%d", count);
    }
    else{
    while(str[i]!='\0'){
        if(str[i]==' ' && str[i+1]!=' '){
            count++;
        }
        i++;
    }
    printf("%d", count+1);
    }
    return 0;
}
