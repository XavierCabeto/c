#include <stdio.h>

int main(void) {
	int array[5];
	
	for (int i = 0; i < 5; i++) {
		array[i] = i + 1;
	}
	
	printf("%u", array[0]);
}
