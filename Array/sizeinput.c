#include<stdio.h>
int main(){
int n;
printf("enter the size of array :");
scanf("%d", &n);
int arr[n];

for(int i =0; i<=n-1; i++){
    scanf("%d", &i);

}
    for(int i=0; i<=n-1; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}