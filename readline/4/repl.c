#include<stdio.h>
#include "readline.h"
int repl(FILE*i,FILE*o){
char b[1024];
do{
  readline(i,b);
  fprintf(stdout,"%s\n",b);
}while(strcmp(b,"quit")!=0);
return 0;
}
