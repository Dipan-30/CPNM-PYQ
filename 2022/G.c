#include <stdio.h>

int main() {
    int n,temp;
    printf("write the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("write the elements: ");
    for(int i =0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted Array Elements are: ");
    for(int i =0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
