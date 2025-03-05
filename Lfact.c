#include<stdio.h>
int main(){
int num ;

printf("enter any integer :");
scanf("%d", &num);

int fact = num;
for(int i = 1; i<num; i++){

    fact= fact * i;
}
printf("%d", fact);
return 0;
}