#include<stdio.h>
#include<string.h>
#include<unistd.h>
main()
{char c[1024]="a";
 while(strcmp(c,"exit")!=0)
 {fscanf(stdin,"%s",&c);
  system(c);
 }
}
