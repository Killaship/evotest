#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int currpoint = 0;
int run = 1;
// atcg

char genome[16] = {
	"A",
	"A",
	"A"
};

void executeDNA() {
	char* codonbuff[4];
	codonbuff[3] = "\0";
	for (int i = 0; i < 3; i++) {  
		codonbuff[i] = genome[i];  
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
