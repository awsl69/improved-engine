#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void say_hello(const char * msg) {
	//char * p;
	//p = (char *)malloc(123);

	if (msg) {
		printf("hello , %s", msg);

	}
	else {
		printf("hello,who are you\n");
	}
}


int main1(void) {
	say_hello("É§Äê");
	system("pause");
	return 0;
}