/*
1. Given two integers, write a program to find all common divisors of 5 and 7 between them (including them).
 ________________________________________________
| Input: 100 200                                 |
| Output: 105 140 175                            |
|________________________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void Ex1(int lowerbound, int upperbound){
	//yint n[1000];
	int i;
	for (int i = 0; i < SIZE; i++)
	{
		while (n[i]>=lowerbound && n[i]<=upperbound)
	{
		if(n[i]%7==0 && n[i]%5==0)
		printf("Output:%d",n[i]);
	}
	}	our codes here
	
}

int main(int argc, char *argv[]) {
	int lowerbound = atoi(argv[1]);
    int upperbound = atoi(argv[2]);
	Ex1(lowerbound, upperbound);
	return 0;
}
