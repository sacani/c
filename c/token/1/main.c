#include<stdio.h>
#include<string.h>
#include<stddef.h>
int main(int argc,char**argv){
char*t;
char*c;
c=strdup(argv[1]);
t=strsep(&c," ");
do{
fprintf(stdout,"%s\n",t);
t=strsep(&c," ");
}while(t!=NULL);
return 0;
}
