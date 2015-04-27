//
//  main.c
//  forStatement
//
//  Created by Yan Yan on 4/27/15.
//  Copyright (c) 2015 SIAT. All rights reserved.
//

#include <stdio.h>

#define LOWER 0 /* lower limit of table*/
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

int main(int argc, const char * argv[]) {
    // insert code here...
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

}
