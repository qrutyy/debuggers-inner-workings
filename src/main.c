#include <stdio.h>
#include <unistd.h>

int main() {
	int i;
	for (int i = 0; i < 10; ++i) {
		printf("My Counter: %d\n", i);
		sleep(2);
	}
	return 0;
}
