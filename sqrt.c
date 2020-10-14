/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Takes input from command line
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("NEGSUPPORT Usage: ./a.out input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input < 0){
		printf("Sqrt of %d is %fi\n",input,sqrt(-input));
		exit(-1);
	}
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting.\n");
	return(0);

} // end main
