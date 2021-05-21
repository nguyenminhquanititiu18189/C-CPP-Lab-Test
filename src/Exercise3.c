/*
3. Given two integers, write a program to get the Fibonacci series between them (including them).
Ex:
 __________________________________________________________
| Input: 5 100                                             |
| Output: 5 8 13 21 34 55 89                               |
|__________________________________________________________|
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void Ex3(int lowerbound, int upperbound){
	//your codes here
	int n[SIZE];
	int i;
	for(i=0;i<=SIZE;i++){
		while (n[i]>=lowerbound&&n[i]<=upperbound)
		{
			n[i]=n[i]-1 + n[i]-2;
		}
		printf("Output:%d",n[i]);
	}
}

int main(int argc, char *argv[]) {
	int lowerbound = atoi(argv[1]);
    int upperbound = atoi(argv[2]);
	Ex3(lowerbound, upperbound);
	return 0;
}
