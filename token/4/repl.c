#include<stdio.h>
#include<string.h>
#include "readline.h"
#include "token.h"
#include "help.h"
int repl(FILE*i){
char b[1024];
char*c;
char*t;
do{
  readline(i,b);
  c=strdup(b); 
  t=strsep(&c," ");
  if(strcmp(t,"token")==0)token(c);
  if(strcmp(t,"help")==0)help();
}while(strcmp(t,"quit")!=0);
return 0;
}
