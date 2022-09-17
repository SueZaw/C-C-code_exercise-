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
char* strcpy2(char* destination, const char*  source) {//copy string from source and paste it into destination
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
//strcat
/*
char* strcat2(char* destination,const char* source)
{
    int len1 = strlen2(source);
    int len2 = strlen2(destination);
    for (int i = 0; i < len1; i++)
    {
        destination[len2 + i] = source[i];
    }
    return destination;
    destination += '\0';
}

*/
 //strcmp
/*int strcmp2(const char* str1, const char* str2)
{
    int count = 0;
    int str1_len = strlen2(str1);
    int str2_len = strlen2(str2);
    if (str1_len > str2_len)
    {
        return 1;
    }
    if (str1_len < str2_len)
    {
        return -1;
    }
    if (str1_len == str2_len)
    {
        while (str2[count] != '\0' && str2[count] != -52)
        {
            if (str1[count] == str2[count])
            {
                count++;
            }
            else
            {
                return str1[count] - str2[count];
            }
        }
    }
    return str1[count] - str2[count];
}*/
char* strlwr(char* s)
{
    char* t = s;

    if (!s)
    {
        return 0;
    }

    int i = 0;
    while (*t != '\0')
    {
        if (*t >= 'A' && *t <= 'Z')
        {
            *t = *t + ('a' - 'A');
        }
        t++;
    }

    return s;
}
char* strupr(char* s)
{
    char* t = s;

    if (!s)
    {
        return 0;
    }

    int i = 0;
    while (*t != '\0')
    {
        if (*t >= 'a' && *t <= 'z')
        {
            *t = *t - ('a' - 'A');
        }
        t++;
    }

    return s;
}