#include <stdio.h>
#include <stdlib.h>
int currpoint = 0;
int stop = 0;
int genome[16] = {
	'A',
	'A',
	'A',
	'G',
	'C',
	'C'
};

void executeDNA() {
	int codonbuff[3];
	for (int i = 0; i < 2; i++) {  
		codonbuff[i] = genome[i];
        	printf("%c", codonbuff[i]);     
    	}      
	switch((codonbuff[0]+(codonbuff[1]+(codonbuff[2]) {
		case ('A' + 'A' + 'A'):
			stop = 1;
			break;
	}
}
	

int main() {
	while(!stop) {
		executeDNA();
		currpoint++;
	}
	return 0;
}
