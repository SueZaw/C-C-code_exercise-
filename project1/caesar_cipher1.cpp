#include <stdio.h>
void caesar1() {
	printf("This is Plain Text ..\n");
	char plaintext[5] = { 'a','b', 'c', 'd', 'e' };


	for (int i = 0; i < 5; i++) {
		printf("%d \t %c \t %d\n", i, plaintext[i], plaintext[i]);
	}


	printf("This is Cipher Text...\n");
	char ciphertext[5];
	for (int i = 0; i < 5; i++) {
		ciphertext[i] = plaintext[i] + 3;
		printf("%d \t %c \t %d\n", i, ciphertext[i], ciphertext[i]);
	}

	printf("This is Dechpher Text....\n");
	char deciphertext[5];
	for (int i = 0; i < 5; i++) {
		deciphertext[i] = ciphertext[i] - 3;
		printf("%d \t %c \t %d\n", i, deciphertext[i], deciphertext[i]);
	}
}