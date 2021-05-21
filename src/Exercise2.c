/*
2. Write a program to convert temperatures from Celsius to Fahrenheit and 
reverse. The input is a string.
Ex:
 _________________________________________
| Input: 60C                              |
| Output: 140.0F                          |
| Input: 450F                             |
| Output: 232.2C                          |
|_________________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void Ex2(char t[]){
	//your codes here
	float c=0,f=0;
	char last=strlen(t);
	c=atoi(t);
	f=atoi(t);
	if (t[last]=='C')
	{
		f=(c*1.8)+32;
		printf("Output:%d F",f);
	}
	if (t[last]=='F'){
		c=(f-32)/1.8;
		printf("Output:%d C",c);
	}	
}
	
}

int main(int argc, char *argv[]) {
	char *t = argv[1];
    Ex2(t);
	return 0;
}
