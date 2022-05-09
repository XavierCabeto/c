#include <stdio.h>
#include <unistd.h>

int main() {
	int i;
	for (i = 1; ; i *= 2) {
		printf("%i\n", i);
		sleep(1);
	}	
}
