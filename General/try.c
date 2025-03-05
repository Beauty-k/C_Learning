#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
typedef struct word_t{
    char *word;
    int count;
}word;

int main() {
    char fruit[6] = {"apple"};
    //char temp[5] = {"apple"};
    word alphabet[6] = {0};
    
    // while(fruit[i] != '\0'){
    //     temp[i] = fruit[i];
    //     i++;
    // }
    printf("%s\n",fruit);
    
    for(int i = 0; fruit[i] != '\0'; i++){
        char *word ;
        word[i]= fruit[i];
        printf("%d\n",word[i]);
        for(int j = i; fruit[j] != '\0'; j++){
            if(word[i] == fruit[j]){
                alphabet[i].word = word;
                alphabet[i].count++;
            }
            j++;
        }
       // printf("first count is: %d\n",alphabet[i].count);
        i++;
    }
    // int i = 0;
    // while(alphabet[i].count != '\0'){
    //     printf("%d count is: %d\n",alphabet[i].count );
    //     i++;
    // }
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
