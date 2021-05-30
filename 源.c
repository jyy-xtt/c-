#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b) {
		d = b;
		b = a;
		a = d;
	}
	if (a < c) {
		d = c;
		c = a;
		a = d;
	}
	if (b < c) {
		d = c;
		c = b;
		b = d;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}