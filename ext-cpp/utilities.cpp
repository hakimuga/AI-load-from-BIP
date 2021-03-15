#include"utilities.hpp"



float deepLearn(float f0, float f1, float f2, float f3){

char array0[100]="";
sprintf(array0, "%f", f0);

char chaine[] = " ";
strcat(array0, chaine);
 

char array1[100]="";
sprintf(array1, "%f", f1);
strcat(array1, chaine);
 

char array2[100]="";
sprintf(array2, "%f", f2);
strcat(array2, chaine);

char array3[100]="";
sprintf(array3, "%f", f3);
strcat(array3, chaine);

strcat(array0, array1);

strcat(array0, array2);

strcat(array0, array3);

char cmd[] = "java -jar model.jar ";

strcat(cmd, array0);

char file [] = " > system.txt";


strcat(cmd, file);

printf(cmd);

int a = system(cmd); 


   FILE *fp;
   char buff[255];

   fp = fopen("system.txt", "r");
   fscanf(fp, "%s", buff);
   //printf("1 : %s\n", buff );
 float ftemp = atof(buff);



return ftemp;
}