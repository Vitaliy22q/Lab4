#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas [10],i,zal,sum=0;
	
	srand (time(0));
	for(i=0;i<10;i++){
	 mas[i]=rand() % 60-30;
		
	}
	for(i=0;i<10;i++){
	    zal= mas[i]	% 3;
	    if(zal==0)
	        sum=sum+mas[i];
	}
	         for(i=0;i<10;i++){
	         printf("\nmas[%d]=%d,",i,mas[i]);
	         
	}
printf ("\nsum=%d",sum);

	return 0;
}
