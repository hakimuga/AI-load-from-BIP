#ifndef _ProbaHelper
#define _ProbaHelper

#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <sys/time.h>

using namespace std;

struct line_t{
	int value;
	int frequency;
};

typedef int* distribution_t; 

/** return value and frequency as 
line_t structure from line line **/
line_t get_values(string);

/** return the frequency sum in file f **/
int get_file_size(string);

/** return an array that contains f line and  update size **/
distribution_t init_distribution(string, int&);

int get_average(distribution_t, int);

/**  select value with respect 
to distribution defined in dist **/
int select(distribution_t, int);

/** select value in a uniform
distribution in the inteval [v1, v2] **/
int select(int, int);

#endif
