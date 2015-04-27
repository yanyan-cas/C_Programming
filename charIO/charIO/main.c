//
//  main.c
//  charIO
//
//  Created by Yan Yan on 4/27/15.
//  Copyright (c) 2015 SIAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//	int c;

//	long nc;
	double nc;

//	c = getchar();
//	while(c != EOF){
//		putchar(c);
//		c = getchar();
//	}

//	while((c = getchar()) != EOF)
//	putchar(c);
	
//	printf("%d\n", EOF);
//	nc = 0;
//	while(getchar() != EOF)
//		++nc;
//	printf("%ld\n", nc);
	
	for(nc = 0; getchar() != EOF; ++nc)
		;
	printf("%f\n", nc);
}

