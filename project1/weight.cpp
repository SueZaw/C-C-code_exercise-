#include <stdio.h>

void weight(void) {
	int weight;
	int number;
	printf("add your weight\n");
	scanf_s("%d", &weight);
	printf("your weight is : %d pounds \n", weight);
	printf("these are planets.Please,Choose No. to calculate Your weight on your destination planet\n");
	printf("No.	Planet	Relative Gravity\n1	Mercury	 0.38\n2	Venus	 0.91\n3	Mars	 0.38\n4	Jupiter	 2.34\n5	Saturn	 1.06\n6	Uranus	 0.92\n7	Neptune	 1.19\n\n");
	scanf_s("%d", &number);
	/*One easy way to calculate your weight on other planets is to multiply your weight on Earth by the ratio between gravity on another planet and Earth.*/
	(number == 1) ? weight *= 0.38 : 0;
	(number == 2) ? weight *= 0.91 : 0;
	(number == 3) ? weight *= 0.38 : 0;
	(number == 4) ? weight *= 2.34 : 0;
	(number == 5) ? weight *= 1.06 : 0;
	(number == 6) ? weight *= 0.92 : 0;
	(number == 7) ? weight *= 1.19 : 0;
	printf("Your weight on your destination planet : %d pounds \t", weight);
}