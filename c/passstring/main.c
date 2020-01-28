#include<stdio.h>
#include "passstring.h"
int main(int argc,char**argv){
int i;
for(i=0;i<argc;i++)passstring(argv[i]);
return 0;
}
