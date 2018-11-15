/*TODO: Include appropriate headerx*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc < 5 || argc > 5) {
		printf("Usage");
		exit(0);
	}
	/*TODO: Declare an array large enough to hold the raw bytes. Raw bytes are best stored in byte-addressed arrays. Pick the appropriate type. Call it "raw_bytes*/
	/*TODO: Declare a function pointer type that matches the calc function's type. Call it "Calc_fptr */
	
	FILE *fp;
	unsigned int i;
	Calc_fptr calculator;
	
	/*TODO: if number of arguments is not 4 (5 including program name) 
	print("Usage %s <filename><unit><operation><uint>\n", argv[0]) and exit */
	
	/*TODO: Open and read the binary file into raw_bytes. Use fopen and fread*/
	
	calculator = (Calc_fptr) raw_bytes;
	/*TODO: Print the result. Refer to sample input and output.*/
	return 0;
}
