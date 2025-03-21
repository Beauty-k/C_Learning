#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *hash[101];
record_t* create_node(char *key, char *value){
    int *hashcode = (int*)(*key);

    record_t *new_node = (record_t*)malloc(sizeof(record_t));
    new_node->phone = *hashcode;
    new_node->name = *value;
    new_node->next = NULL;
    return new_node;
}


int get_hash_code(char *key)
{
       //Write code to generate hashcode, ensure the generated hashcode is between 0-100
       int *key = (int*)(*key) ;
       int hashcode = *key % 101;

       return hashcode;
}
void put(void * hashtable[], char *key, void *value)
{
	//Write your code here. Store the key-value pair in hashtable, the index should be a hashcode
    //create node and should return address of node
    record_t *new_node = create_node(key , value);
    //generate hash code
    int hashcode = get_hash_code(key);
    if(hashtable[hashcode] == NULL){
        hashtable[hashcode] = new_node;

    }else{
        record_t *temp = hashtable[hashcode];
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp = new_node;
    }


}

void * get(void * hashtable[],char * key, void *value)
{
    //Write your code here. Retrieve the value from hashtable using the index which is a hashed value of key.
    int hashcode = get_hash_code(key);
    

}


char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    
    char* data = malloc(alloc_length);
    
    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);
        
        if (!line) {
            break;
        }
        
        data_length += strlen(cursor);
        
        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }
        
        alloc_length <<= 1;
        
        data = realloc(data, alloc_length);
        
        if (!data) {
            data = '\0';
            
            break;
        }
    }
    
    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
        
        data = realloc(data, data_length);
        
        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);
        
        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }
    
    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }
    
    if (!*str) {
        return str;
    }
    
    while (*str != '\0' && isspace(*str)) {
        str++;
    }
    
    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }
    
    if (!*str) {
        return str;
    }
    
    char* end = str + strlen(str) - 1;
    
    while (end >= str && isspace(*end)) {
        end--;
    }
    
    *(end + 1) = '\0';
    
    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);
    
    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }
    
    return value;
}
typedef struct record_type
{
        char * phone;
        char * name;
        struct record_type *next;
        
} record_t;

                
record_t parse_record(char *line)
{       
        record_t record;
        record.phone= strtok(line," "); 
        record.name= strtok(NULL," ");

        return record;
}
long parse_long(char* str) {
    char* endptr;
    long value = strtol(str, &endptr, 10);
    
    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
 
   }
  return value;
}
int main(int argc, char * argv[])
{   
    
       
    record_t records[100];
    int count=0;
    count= parse_int(ltrim(rtrim(readline())));
    for (int i = 0; i < count; i++) {
        records[i] = parse_record(ltrim(rtrim(readline())));
        
        put(hash,records[i].phone, records[i].name);
    }
    // for (int i = 0; i < count; i++) {
    //     char * name =get(hash,records[i].phone,records[i].name);
    //     if(strcmp(name,records[i].name)!=0)
    //     {       
    //         printf("Incorrect data retrieved for key=%s - value=%s\n", records[i].phone,name);
    //     }
    //     else
    //     {       
    //         printf("key=%s-value=%s\n",records[i].phone,name);
    //     }
    // }
    
    return 0;
}
