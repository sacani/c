#include<stdio.h>
main(int argc,char**argv){
  FILE*f;
  int n;
  char buffer[1024];
  int c=1;
  f=fopen(argv[1],"r");
  while(!feof(f)){
   n=fread(buffer,c,1024,f);
   c+=n;
   fwrite(buffer,1,n,stdout);
  }
}
