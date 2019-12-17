#include<stdio.h>
#include<string.h>
int repl(FILE*i,FILE*o){
char b[1024];
do{
  fscanf(i,"%s",b);
  c=strdup(b);
  
}while(strcmp(b,"quit")!=0);
return 0;
}	
