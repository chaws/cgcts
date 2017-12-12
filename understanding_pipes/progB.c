#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  char * msg1 = "No line break. ";
  char * msg2 = "Line break\\n\n";
  char * msg3 = "\nSleeping for 3s...\n";
  char * msg4 = "Trying to read\n";
  char * msg5 = "Read something\n";
  char input[1024] = {0};
  int rc;

  while(1) {
    write(2, msg4, strlen(msg4));
    rc = read(0, input, 1024);
    write(2, msg5, strlen(msg5));
    if(rc > 0) {
      write(1, "msg: '", 6);
      write(1, input, rc);
      write(1, "'", 1);
      write(1, msg3, strlen(msg3));
      sleep(3);
    }
    else {
      exit(0);
    }
  }

  return 0;
}
