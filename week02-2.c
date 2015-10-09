#include <stdio.h>

int main(void) {
  int c, *p;
  char s[12] = "Ritsumeikan";

  c = 'A';
  p = &c;
  printf("c: %c\n", c); // 変数cの中身
  printf("&c: %p\n\n", &c); // 変数cのアドレス
  printf("p: %p\n", p); // 変数cのアドレス
  printf("*p: %c\n\n", *p); // 変数cの中身

  *p = 'B';
  printf("c: %c\n", c);　// 変数cの中身
  printf("&c: %p\n\n", &c); // 変数cのアドレス
  printf("p: %p\n", p); // 変数cのアドレス
  printf("*p: %c\n\n", *p); // 変数cの中身

  printf("s: %s\n", s); // 配列sの中身
  printf("s[0]: %c\n", s[0]); // 配列sの1文字目
  printf("s[1]: %c\n", s[1]); // 配列sの2文字目
  printf("s: %p\n", s); // 配列sの先頭アドレス
  printf("&s[0]: %p\n", &s[0]); // 配列sの先頭アドレス
  printf("*s: %c\n", *s); // 配列sの先頭文字
  printf("*(s+1): %c\n\n", *(s+1)); // 配列sの2文字目

  *(s+2) = 'T'; // 配列sの3文字目をTに置換
  printf("s: %s\n", s); // 上記置換済みの配列を出力

  return 0;
}