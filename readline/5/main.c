#include<stdio.h>
#include "repl.h"
int main(int a,char**v){
FILE*i;
switch(a){
case 1:i=stdin;break;
case 2:i=fopen(v[1],"r");break;
}
repl(i,stdout);
return 0;
}
