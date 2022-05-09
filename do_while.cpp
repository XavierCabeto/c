#include <stdio.h>

int main(void) {
	int i = 2;
	
	do {
		printf("%u ", i);
		
		i += 2;
	} while(i < 10);
}
