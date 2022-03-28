#include <stdio.h>
#include <stdlib.h>
int currpoint = 0;
int run = 1;
int genome[16] = {
	'A',
	'A',
	'A',
	'G',
	'C',
	'C'
};

void executeDNA() {
	int codonbuff[4];
	codonbuff[3] = "\0";
	for (int i = 0; i < 2; i++) {  
		codonbuff[i] = genome[i];
        	printf("%c", codonbuff[i]);     
    	}      
	if(strcmp(codonbuff, "AAA") == 0) {
		run = 0;
	}
}
	

int main() {
	while(run) {
		executeDNA();
		currpoint++;
	}
	return 0;
}
