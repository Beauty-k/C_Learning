#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    for(int i = a; i <=b; i++)
    {
        if(i<=9)
        {
          switch(i)
           {
            case 1 : printf("one\n"); // if a is 1
                                  break;
            case 2 : printf("two\n"); // if a is 2
                                  break;
            
            case 3 : printf("three\n"); // if a is 3
                                  break;
            
            case 4 : printf("four\n"); // if a is 4
                                  break;
            
            case 5 : printf("five\n"); // if a is 5
                                  break;
            
            case 6 : printf("six\n"); // if a is 6
                                  break;
            
            case 7 : printf("seven\n"); // if a is 7
                                  break;
            
            case 8 : printf("eight\n"); // if a is 8
                                  break;
            
            case 9 : printf("nine\n"); // if a is 9
                                  break;
            //default :  printf("NULL");       
           }                  
            
        }else if(i % 2 == 0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
            
        
        
             
        
        
        
    }

    return 0;
}

