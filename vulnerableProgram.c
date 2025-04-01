#include <stdio.h>
#include <string.h>
void function (char *input) {
  char buffer [64];
  printf("Sizeof input is %d\n", 80);

  strcpy (buffer, input);

  for (int i=0; i<80; i++){
    printf("%02x ", (unsigned char)buffer[i]); // Imprime cada byte en formato hexadecimal
    if ((i + 1) % 16 == 0) printf("\n");
  }
}

int main (int argc, char *argv []) {
  if (argc > 1) {
    function (argv [1]);
  }
  else {
    printf (" Usage : %s <input >\n", argv [0]);
  }
  return (0);
}
