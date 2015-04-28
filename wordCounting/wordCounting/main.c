//
//  main.c
//  wordCounting
//
//  Created by Yan Yan on 4/28/15.
//  Copyright (c) 2015 SIAT. All rights reserved.
//

#include <stdio.h>

#define IN 1
#define OUT 0



int main(int argc, const char * argv[]) 
{
	int c, n1, nw, nc, state;

	state = OUT;
	n1 = nw = nc = 0;

	while((c = getchar())!='\n'){
		++nc;
		if(c == '\n')
			++n1;
		if(c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", n1, nw, nc);

}
