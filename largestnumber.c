#include <stdio.h>
int main()
{   int n=0;
    printf("Enter the size of array ");
    scanf("%d",&n);
        int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the two digit %d element of array ",i+1);
        scanf("%d",&arr[i]);

    }
    int arr1[n*2];
    int a;
    for (int i = 0; i < n; i++) {
        arr1[i*2]=arr[i]/10;
    }
        for (int i = 0; i < n; i++) {
        arr1[i*2+1]=arr[i]%10;
    }
    for (int j = 0; j < sizeof(arr1)/4 -1; j++) {
        
        for (int i = 0; i < sizeof(arr1)/4 -1; i++) {
            if(arr1[i]<arr1[i+1]){
           a=arr1[i];
           arr1[i]=arr1[i+1];
           arr1[i+1]=a;
             }
         }   
    }
    printf("Largest possible is ");
    for (int i = 0; i < n*2; i++) { printf("%d",arr1[i]);    }
}
