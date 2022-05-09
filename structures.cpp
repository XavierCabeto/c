#include <stdio.h>

struct person {
	int age;
	char *name;
};

int main(void) {
	person xavier;
	xavier.age = 19;
	xavier.name = "Xavier";
	printf("%s, age %u", xavier.name, xavier.age);
}
