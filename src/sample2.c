#include <stdio.h>

void sample2() {
  char *ptr = "Hello World!";
  printf("word: %s\n", ptr);

  // ポインタ型のサイズしか取得することができないため、正しく文字列の長さを取得できない。
  for(int i = 0; i < sizeof(ptr); i++) {
    printf("%d letter: %c\n", i + 1, ptr[i]);
  }
}
