#include <stdio.h>

#define CGC_FLAG_PAGE_ADDRESS (void *)0x4347C000

void func(const char * as_char) {
  while (*as_char++)
    printf("'%c' ", as_char);
}

int main() {
  int as_int = CGC_FLAG_PAGE_ADDRESS;
  void * as_void = (void *)as_int;

  //printf("ptr = %p\n", ptr);
  return 0;
}
