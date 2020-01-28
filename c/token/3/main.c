#include<stdio.h>
#include<string.h>
int main(int a,char**v){
char*t;
char*c;
c=strdup(v[1]);
t=strsep(&c," ");
do{
  fprintf(stdout,"%s\n",t);
  t=strsep(&c," ");
}while(t!=NULL);
return 0;
}
