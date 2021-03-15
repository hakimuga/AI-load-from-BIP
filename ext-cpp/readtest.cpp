#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>

const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ",");
            tok && *tok;
            tok = strtok(NULL, ",\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}

const float getfield1(char* filecsv, int ln, int cl)
{

   /* int x=1;
    int y=5;
    char* s="src1/test1.csv";*/

    FILE* stream = fopen(filecsv, "r");
     int i=0;
     char line[1000];
    while (fgets(line, 1000, stream) && i<366)
            {
       		char* tmp = strdup(line);
       		if (ln==i)
       		 return std::stod(getfield(tmp, cl));

       	    //printf("%s",line);
       	    free(tmp);
       		i++;}
}


float minDIST(float n1, float n2, float n3){
    if( n1>=n2 && n1>=n3 )
        {return  n1;}
    if( n2>=n1 && n2>=n3 )
        {return  n2;}
    if( n3>=n1 && n3>=n2 )
        {return  n3;}
    return 0;
}

float readWH(item){

return getfield1("discritization_test.csv", item, 2)
}

float readWV(item){

return getfield1("discritization_test.csv", item, 3)
}

float readWP(item){

return getfield1("discritization_test.csv", item, 1)
}

float readDIST0(item){

return getfield1("discritization_test.csv", item, 5)
}

float readDIST1(item){

return getfield1("discritization_test.csv", item, 6)
}

float readDIST2(item){

return getfield1("discritization_test.csv", item, 7)
}

