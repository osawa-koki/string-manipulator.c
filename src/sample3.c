#include <stdio.h>
#include <string.h>

void sample3() {
  char *ptr = "Hello World!";
  printf("word: %s\n", ptr);

  // 専用の関数を使うことで文字列の長さを取得できる。
  for(int i = 0; i < strlen(ptr); i++) {
    printf("%d letter: %c\n", i + 1, ptr[i]);
  }
}
