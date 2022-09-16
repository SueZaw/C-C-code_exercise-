#include <stdio.h>
#include "strManiHeader.h"

int main() {
	char a[] = { 'p','r','o','g','r','a','m','\0' };
	char b[] = "programs";
	char c[] = "programmer";
	char d[] = "PROGRAMMERRR";
	printf("a=%d b=%d", strlen2(a), strlen2(b));
	char* j;
	j = strcpy2(a, c);
	printf("a is now =%s", j);
	/*char* g;
	g = strcat2(c, a);
	printf("%c" = g);*/
	char *l;
	l = strupr(b);
	printf("\n%s", l);
	char* k;
	k = strlwr(d);
	printf("\n%s", k);
}
