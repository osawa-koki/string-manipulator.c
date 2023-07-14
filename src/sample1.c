#include <stdio.h>

void sample1() {
  char text[] = "Hello, World!";
  printf("%s\n", text);
  for (int i = 0; i < sizeof(text); i++) {
    printf("%d letter: ", i);
    if (text[i] == '\0') {
      printf("[NULL] (\\0)");
    } else {
      printf("%c (%d)", text[i], text[i]);
    }
    printf("\n");
  }
}
