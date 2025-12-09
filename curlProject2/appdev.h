#pragma once
#define N 20  //length of the user name

typedef struct {
	int max;
	int min;
	char rname[N];
}rock;

void send_data(rock);
