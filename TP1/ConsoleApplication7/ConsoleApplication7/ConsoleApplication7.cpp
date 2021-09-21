#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <conio.h>
#include <time.h>
void main()
{
	long init = time(NULL);
	int total = 0;
	int note;
	printf("%lld\n", init);
	srand(init);

	for (int i = 0; i < 30; i++)
	{
		note = rand() % 21;
		printf("Note %d : %d\n", i + 1, note);
		total = total + note;
	}
	total /= 30.0;
	printf("Moyenne : %.2f\n", total);
}
