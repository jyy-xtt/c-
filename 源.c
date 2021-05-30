#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int max(int a, int b) {

	if (a > b) {

		return a;

	}

	else {

		return b;

	}

}

int main()

{

	int a = 0;

	int b = 0;

	scanf("%d %d", &a, &b);

	int c = max(a, b);

	printf("%d\n", c);

	return 0;

}