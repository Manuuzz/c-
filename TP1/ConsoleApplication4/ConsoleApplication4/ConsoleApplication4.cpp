#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main() {
	int N;
	int Total=0;
	int i;
	printf("Donnez un nombre");
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		Total = Total + i;
		}
	printf("%d", Total);
}