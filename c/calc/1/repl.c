#include<stdio.h>
#include<string.h>
#include "readline.h"
#include "help.h"
#include "add.h"
void repl(FILE*i){
char b[1024];
char*c;
char*t;
do{
  readline(i,b);
  c=strdup(b);
  t=strsep(&c," ");
  if(strcmp(t,"help")==0)help();
  if(strcmp(t,"+")==0)add(c);
}while(strcmp(b,"quit")!=0);
}
