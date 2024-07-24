//not done
#include <stdio.h>
char* f(char str1[],char str2[]){
char str3[100];
int i = 0;
while (str1[i] != '\0'){
    str3[2*i]=str1[i];
    str3[2*i+1]=str3[i];
    i++;
}
return str3;
}
int main() {
    char str1[100];
    char str2[100];
    printf("Enter the string1: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the string2: ");
    fgets(str2, sizeof(str2), stdin);
    char* ans;
    ans = f(str1, str2);
    printf("Modified string: %s\n", *(ans));

    return 0;
}
