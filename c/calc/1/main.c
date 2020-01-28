#include<stdio.h>
#include "repl.h"
int main(int c,char**v){
FILE*i;
switch(c){
  case 1:i=stdin;break;
  case 2:i=fopen(v[1],"r");break;
}
repl(i);
}
