#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}

int main ()
{
	int mas[200], i, proizved = 1, kilkist = 0;
	int n, min, max;
	
	printf ("Array size: ");
	scanf ("%d", &n);
	
	printf ("\nMin rand: ");
	scanf ("%d", &min);
	
	printf ("\nMax rand: ");
	scanf ("%d", &max);
	
	srand(time(0));
	
	for(i = 0; i < n; i++) {
		mas[i] = get_random_int_min_max(min, max);
		printf("\nmas[%d] = %d", i, mas[i]);
	}
	
	for (i = 0; i < n; i++) {
		if(((i % 2) == 0) && (mas[i] > 0)){
			proizved *= mas[i];
			kilkist = kilkist + 1;
		}
	}	
	
	printf("\n\nProizvedenie = %d", proizved);	
	printf("\nKoli4estvo: %d", kilkist);
		
	return 0;	
}
