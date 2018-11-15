#include<stdio.h>
main()
{
int n;
char b[1024];
int c=1;
while(!feof(stdin))
  {
  n=fread(b,c,1024,stdin);
  c+=n;
  fwrite(b,1,n,stdout); 
  }
}
