#include "correct.h"
int login(){
  char*username[16];
  char*password[16];
  fscanf(stdin,"login:%s",&username);
  fscanf(stdin,"password: %s",&password);
  if(correct(username,password))
    return 1; 
  return 0;
}
