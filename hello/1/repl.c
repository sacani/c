#include<stdio.h>
#include<string.h>
#include "hello.h"
#include "help.h"
int repl(FILE*i,FILE*o){
char b[1024];
do{
  fscanf(i,"%s",b);
  if(strcmp(b,"help")==0)help(o);
  if(strcmp(b,"hello")==0)hello(o);
}while(strcmp(b,"quit")!=0);
return 0;
}
