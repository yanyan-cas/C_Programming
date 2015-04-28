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
//	printf("%f\n", nc);
	
	for(nc = 0; getchar() != '\n'; ++nc)
		;
	printf("%.0f\n", nc);

//	int c, n1;

//	n1 = 0;

//	while((c = getchar()) != EOF)
//		if(c == '\n')
//			++n1;
//		printf("%d\n", n1);

}

