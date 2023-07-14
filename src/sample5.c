#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sample5() {
  char str1[16] = "Hello World!";

  // 動的にメモリを確保する。
  char *str2 = (char*)malloc(sizeof(char) * strlen(str1));
  char *str3 = (char*)malloc(sizeof(char) * strlen(str1));

  printf("str1: %s\n", str1);

  // 文字列のコピー。
  strcpy(str2, str1);
  printf("str2: %s\n", str2);

  // 指定した長さだけコピー。
  strncpy(str3, str1, 5);
  printf("str3: %s\n", str3);

  // メモリの解放も忘れずに！
  free(str2);
  free(str3);
}
