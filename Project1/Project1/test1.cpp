#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int x = 0;
	scanf("%d", &x);
	int i = 2;
	for (x = 100; x <= 200; x++) {
		
		while (x>i) {
			if (x % i == 0)
				break;
			else
				i++;
		}

	}
	return 0;
};
