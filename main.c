#include <stdio.h>
#include <stdlib.h>
int currpoint = 0;
int stop = 0;
int genome[16] = {
	'A',
	'A',
	'T',
	'G',
	'C',
	'C'
};

void executeDNA() {
	int codonbuff[3];
	for (int i = 0; i < 3; i++) {     
        printf("%c", codonbuff[i]);     
    	}      
}
	

int main() {
	while(!stop) {
		executeDNA();
		currpoint++;
	}
	return 0;
}
