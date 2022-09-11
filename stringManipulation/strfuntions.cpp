#include<stdio.h>
//strlen2 
int strlen2(char* arr)//return the length of string
{
    int count = 0;
    while (arr[count] != '\0' && arr[count] != -52)
    {
    
        count++;
    }
    printf("\n\n");
    return count;
}
//strcpy2
char* strcpy2(char* destination, char* const source) {//copy string from source and paste it into destination
    int count = 0;
    while (source[count] != '\0' && source[count] != -52)
    {
        destination[count] = source[count];//assign
        count++;
    }
    
    destination[count] = '\0';
    printf("\n");
    return destination;
}
//strcmp
