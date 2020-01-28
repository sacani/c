#include<stdio.h>
#include<string.h>
int token(char*s){
char*t;
char*c;
c=strdup(s);
t=strsep(&c," ");
do{
  fprintf(stdout,"%s\n",t);
  t=strsep(&c," ");
}while(t!=NULL);
return 0;
}
