#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
	srand(time(NULL));
    int i;
	int randomNumber1 = rand() % 10; //0-10
	int randomNumber2 = rand() % 10; //0-10
	int randomNumber3 = rand() % 10; //0-10
    int randomNumber4 = rand() % 10; //0-10
	int randomNumber5 = rand() % 10; //0-10
	int randomNumber6 = 9; //0-10
	
	printf("Lotto is Rank1 : %d%d%d%d%d%d\n", randomNumber1,randomNumber2,randomNumber3,randomNumber4,randomNumber5,randomNumber6);
	
	

}