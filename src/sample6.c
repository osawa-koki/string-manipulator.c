#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sample6() {
  char str1[16] = "Hello";
  char str2[16] = "World!";
  char *str3 = (char*)malloc(sizeof(char) * (strlen(str1) + strlen(str2)));

  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);

  // 文字列の連結。
  str3 = strcat(str1, str2);

  printf("str3: %s\n", str3);
}
