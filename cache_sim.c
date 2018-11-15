#include <stdio.h>


struct line {
	int valid;
	int tag;
	char block[4];
};
typedef line Line;

//n = 8 because sum of b number digits is 29, with remainder of 2 when modded by 3
//8 lines per set
void sim() {
	int m = 128;
	int t = 32;
	int b = 4;
	
	int n = 8;
//t = n*b*s
	int s = t/(n*b); //s = 1
	//128*8 = 1024 bits
	Line cache[n][s];
	
