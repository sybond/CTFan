#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printFlag(char *param_1)

{
  char *__dest;
  size_t sVar1;
  int local_30;

  __dest = (char *)malloc(0x40);
  memset(__dest,0,0x40);
  strcpy(__dest,param_1);
  sVar1 = strlen(__dest);
  local_30 = 0;
  while (local_30 < (int)sVar1) {
    __dest[(long)local_30] =
         (char)((int)((((int)__dest[(long)local_30] ^ 0xfU) - 0x1d) * 8) % 0x5f) + ' ';
    local_30 = local_30 + 1;
  }
  puts(__dest);
  return;
}

int main () {
  printFlag("\\PJ\\fChqqZw|0;w2l|wELL(wYqqE$ahk");
  printFlag("\\PJ\\fCaq(Lw|)$Tw$Tw@wb@ELwbY@hk");
  printFlag("\\PJ\\fCTq00;waq|w)L0LwL$|)L0k");
  printFlag("\\PJ\\fC|)L0LTw@Yt@;Twmq0Lw|qw@w2$a@0;w|)@awmLL|Tw|)LwZL2lhhL0k");

   return(0);
}
