#include <stdio.h>
#include <string.h>

void sample7() {
  char str1[16] = "Hello World!";
  char str2[16] = "Hello World!";
  char str3[16] = "Hello";

  // アドレスを比較しているため、同じ文字列でも違うと判定される。
  if (str1 == str2) {
    printf("%s and %s are the same string\n", str1, str2);
  } else {
    printf("%s and %s are different strings\n", str1, str2);
  }

  // 専用の関数を使用した文字列の比較。
  if (strcmp(str1, str2) == 0) {
    printf("%s and %s are the same string\n", str1, str2);
  } else {
    printf("%s and %s are different strings\n", str1, str2);
  }

  // 専用の関数を使用した文字列の比較。
  if (strcmp(str1, str3) == 0) {
    printf("%s and %s are the same string\n", str1, str3);
  } else {
    printf("%s and %s are different strings\n", str1, str3);
  }
}
