#include <stdlib.h>
#include <stdio.h>

typedef struct htreq1 {
    unsigned int resplen;
    char recv[1044];
    char resp[1024];
    void (*match)(struct htreq1*);
    void (*nomatch)(struct htreq1*);
        
} htreq1;

typedef struct htreq2 {
    unsigned int resplen;
    char recv[44];
    char resp[24];
    void (*match)(struct htreq2*);
    void (*nomatch)(struct htreq2*);
        
} htreq2; 

int main() {
  htreq1 * r1;
  htreq2 * r2;

#ifdef STACK
  htreq1 tmp1; r1 = &tmp1;
  htreq2 tmp2; r2 = &tmp2;
#else
  r1 = malloc(sizeof(htreq1));
  r2 = malloc(sizeof(htreq2));
#endif

  unsigned int a1, a2, a3, a4, a5;

  char * str1 = "** Memory alignment of a struct **\n"
               "  r1 is at %p\n"
               "  r1->resplen + %d\n"
               "  r1->recv + %d\n"
               "  r1->resp + %d\n"
               "  r1->match + %d\n"
               "  r1->nomatch + %d\n";
  
  char * str2 = "\n"
               "  r2 is at %p\n"
               "  r2->resplen + %d\n"
               "  r2->recv + %d\n"
               "  r2->resp + %d\n"
               "  r2->match + %d\n"
               "  r2->nomatch + %d\n";

  a1 = (unsigned int)((char *)&r1->resplen - (char *)r1);
  a2 = (unsigned int)((char *)&r1->recv    - (char *)&r1->resplen);
  a3 = (unsigned int)((char *)&r1->resp    - (char *)&r1->recv);
  a4 = (unsigned int)((char *)&r1->match   - (char *)&r1->resp);
  a5 = (unsigned int)((char *)&r1->nomatch - (char *)&r1->match);
  printf(str1, r1, a1, a2, a3, a4, a5);

  a1 = (unsigned int)((char *)&r2->resplen - (char *)r2);
  a2 = (unsigned int)((char *)&r2->recv    - (char *)&r2->resplen);
  a3 = (unsigned int)((char *)&r2->resp    - (char *)&r2->recv);
  a4 = (unsigned int)((char *)&r2->match   - (char *)&r2->resp);
  a5 = (unsigned int)((char *)&r2->nomatch - (char *)&r2->match);
  printf(str2, r2, a1, a2, a3, a4, a5);

  return 0;
}
