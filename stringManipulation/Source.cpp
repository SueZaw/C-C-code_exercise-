#include <stdio.h>;
#include "strManiHeader.h"
int main() {
	char a[] = { 'p','r','o','g','r','a','m','\0' };
char b[]= "programs";
char c[] = "programmer";
printf("a=%d b=%d", strlen2(a), strlen2(b));
char* j;
j = strcpy2(a, c);
printf("a is now =%s", j);

}