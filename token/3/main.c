#include<stdio.h>
#include<string.h>
#include<stddef.h>
int main(int argc,char**argv){
char*t;
char*c;
fprintf(stdout,"%s\n",argv[1]);
c=strdup(argv[1]);
fprintf(stdout,"%s\n",c);
t=strsep(&c," ");
do{
fprintf(stdout,"c: %s\n",c);
fprintf(stdout,"token: %s\n",t);
t=strsep(&c," ");
fprintf(stdout,"c2: %s\n",c);
}while(t!=NULL);
return 0;
}
