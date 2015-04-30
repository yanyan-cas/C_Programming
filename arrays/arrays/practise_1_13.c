#include <stdio.h>

int main(int argc, const char * argv[]){

	int c, i, nwhite;
	int nlength[100];

	nwhite = 0;
	for(i =0; i < 10; ++i)
		nlength[i] = 0;
	
	i = 0;
	while((c = getchar()) != '\n')
		if(c !=' ' && c != '\t')
			++nlength[nwhite];
		else if(c == ' ' || c == '\t')
			++nwhite;

	printf("length =");
	for(i = 0; i <= nwhite; ++i)
		printf(" %d", nlength[i]);
	printf(", white space = %d", nwhite);

}
