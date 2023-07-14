#include <stdio.h>
#include <string.h>

void sample4() {
  char str1[16] = "Hello World!";
  // 静的に配列サイズを指定しないといけない。
  char str2[16], str3[16];

  printf("str1: %s\n", str1);

  // 文字列のコピー。
  strcpy(str2, str1);
  printf("str2: %s\n", str2);

  // 指定した長さだけコピー。
  strncpy(str3, str1, 5);
  printf("str3: %s\n", str3);
}
