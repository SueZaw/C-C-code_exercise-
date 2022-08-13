#include <stdio.h>
void cc(int input){
	float uscur = 0.00054;
	printf("myanmar currency:""%d\t""kyats\n",input);

		if (input > 0) {
		float curexchangeresult = input* uscur;
		printf("converted to Us dollar:""%f" "dollars\n\n", curexchangeresult );
	}
	
}
