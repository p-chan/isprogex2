#include <stdio.h>

int main(void) {
  int a, *p;

  a = 10;
  printf("a: %d\n", a); // 変数の中身
  printf("&a: %p\n\n", &a); // 変数のアドレス

  p = &a;
  printf("p: %p\n", p); // 変数のアドレス
  printf("*p: %d\n", *p); // 変数の中身
  printf("&p: %p\n\n", &p); // ポインタのアドレス

  a = 20;
  printf("a: %d\n", a); // 数字
  printf("&a: %p\n\n", &a); // 変数のアドレス

  printf("p: %p\n", p); // アドレス
  printf("*p: %d\n", *p); // 数字
  printf("&p: %p\n", &p); // ポインタのアドレス

  return 0;
}