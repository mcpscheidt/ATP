#include <stdio.h>
#include <string.h>

int main() {
	float nums[8];
	nums[0] = 0;
	nums[1] = 1;
	for(int i = 2; i < 8; i++){
	    nums[i] = nums[i-1]+nums[i-2];
	    printf("Resultado: %f\n", nums[i]);
	}


	return 0;
}
