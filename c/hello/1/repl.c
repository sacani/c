#include<stdio.h>
#include<string.h>
#include "readline.h"
#include "hello.h"
#include "help.h"
int repl(FILE*i){
char b[1024];
do{
  readline(i,b);
  if(strcmp(b,"help")==0)help();
  if(strcmp(b,"hello")==0)hello();
}while(strcmp(b,"quit")!=0);
return 0;
}
