#include <stdio.h>
void caesar2(){
	char plaintext[26] = { 'a','b','c','d','e','f' ,'g','h','i' ,'j','k','l' ,'m','n','o','p' ,'q','r','s' ,'t','u','v' ,'w','x','y' ,'z' };
	char ciphertext[26] = { 'z', 'w', 'k', 'u', 'g', 'i', 'e', 'o', 'f', 'm', 'c', '4', 'j', '0', 'h', '@', '1', 's', 'r', '7', 'd', 'x', 'b', 'v', '3', 'a'
	};
	char ch = '\0';
	char index = '\0';
	printf("Add one alphabet from English alphabets:\t");
	scanf_s("%c", &ch);
	for (int i = 0; i < 26; i++) {
		if (ch == plaintext[i]) {
			index =i;
			break;
		}
	}
	printf("Encrypted text:"" % c\n", ciphertext[index]);
	printf("The original alphabet :""%c\n", plaintext[index]);
	printf("Its character:""%c", index);
	printf("\n\n");



}