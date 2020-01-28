#include<stdio.h>
#include<string.h>
void add(char*s){
char*t;
char*c;
int p;
int a=0;
c=strdup(s);
t=strsep(&c," ");
do{
  sscanf(t,"%d",&p);
  a+=p;
  t=strsep(&c," ");
}while(t!=NULL);
fprintf(stdout,"%d\n",a);
}
