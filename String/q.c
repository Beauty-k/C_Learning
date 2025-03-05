#include <stdio.h>
#include <string.h>
void count_char(char *str)
{
    int i = 0;
    int j = i + 1;
    int count = 0;
    while (str[i] != '\0')
    {
      
        while (str[j] != '\0')
        {
            
            if (str[i] == str[j])
            {
                count= count+1;
                printf("%d\n",count);
            }else
            {
                printf("they are not equal\n");
            }
            j++;
            

        }
    
        printf("%c %d\n", str[i], count);
        i++;
    }
}
int main()
{
    char str[5] = {"APPLE"};
    count_char(str);
   
}
