#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r_number,guess,no_of_att=0;char p;
	printf("\t--\t--Welcome to this mini game of guessing numbers\t--\t--\n");
	srand(time(NULL));
	r_number= rand()%100 + 1;
	do{
		printf("DO YOUR WANNA ENTER THE GAME (Y/N)\n");
		scanf(" %c",&p);
		if(p=='N'){
			break;
		}
		else if(p!='N' && p!='Y') {
		printf("INVALID INPUT \n") ;break;}
		do{
		printf("--- enter your guess number ---\n");
		scanf("%d",&guess);
		if(guess>r_number) printf("enter a smaller number \n");
		else if(guess<r_number) printf("enter a larger number \n");
		else printf("--\t--\t Congrats u have guessed the right number--\t--\t \n");
		no_of_att++;
	    } while(guess!=r_number);
	    if(p=='Y')	printf("Number of attempts : %d\n",no_of_att);
	} while (p=='Y');

	return 0;
}
