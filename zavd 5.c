#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas [100],i,n,m;
	srand (time(0));
	for (i=0;i<100;i++){
		mas[i]= rand () % 100;
		printf("\nmas[%d]=%d,",i,mas[i]);
	}
	
printf("\nVvedite n=");
scanf ("\n%d",&n);
for (i=0;i<100;i++){
	if (n==mas[i])
	printf("\nmas=%d,[%d]",i,mas[i]);
	
  }

	
return 0;
}
