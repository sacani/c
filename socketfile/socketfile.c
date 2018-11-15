#include<arpa/inet.h>
#include<sys/socket.h>
#include<string.h>
#include<stdio.h>
#include<unistd.h>
main()
{
struct sockaddr_in s;
int o;
int n;
int c=1;
char b[1024];
s.sin_family=AF_INET;
inet_pton(AF_INET,"localhost",&s.sin_addr);
s.sin_port=htons(8888);
o=socket(PF_INET,SOCK_STREAM,0);
connect(o,(struct sockaddr*)&s,sizeof(s));
while(!feof(stdin))
  {
  n=fread(b,c,1024,stdin);
  c+=n;
  send(o,b,n,0);
  }
close(o);
}
