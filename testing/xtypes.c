#include <stdio.h>
#include <stdlib.h>

#include <X11/Xlib.h>
#include <X11/Xmd.h>

int main(int argc, char **argv) {
  printf("sizeof(void*)=%d\n",sizeof(void*));
  printf("sizeof(char)=%d\n",sizeof(char));
  printf("sizeof(short)=%d\n",sizeof(short));
  printf("sizeof(int)=%d\n",sizeof(int));
  printf("sizeof(long)=%d\n",sizeof(long));
  printf("sizeof(unsigned_long)=%d\n",sizeof(unsigned long));
  printf("sizeof(CARD32)=%d\n",sizeof(CARD32));
  printf("sizeof(Atom)=%d\n",sizeof(Atom)); /* supposed to be CARD32 */
  printf("sizeof(Window)=%d\n",sizeof(Window));
  return(EXIT_SUCCESS);
}
