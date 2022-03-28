#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int currpoint = 0;
int run = 1;
// atcg

char* genome[16] = {
	"AAA",
	"AAA",
	"AAA"
};

void executeDNA() {

   
	if(strcmp(codonbuff[currpoint], "AAA") == 0) {
		run = 0;
	}
	printf(codonbuff);
}
	

int main() {
	while(run) {
		executeDNA();
		currpoint++;
	}
	return 0;
}
