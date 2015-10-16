#include <stdio.h>

int main(void) {
  int a, *p;

  a = 10;
  printf("a: %d\n", a); // 変数aの中身
  printf("&a: %p\n\n", &a); // 変数aのアドレス

  p = &a;
  printf("p: %p\n", p); // 変数aのアドレス
  printf("*p: %d\n", *p); // 変数aの中身
  printf("&p: %p\n\n", &p); // ポインタpのアドレス

  a = 20;
  printf("a: %d\n", a); // 変数aの中身
  printf("&a: %p\n\n", &a); // 変数aのアドレス

  printf("p: %p\n", p); // 変数aアドレス
  printf("*p: %d\n", *p); // 変数aの中身
  printf("&p: %p\n", &p); // ポインタpのアドレス

  return 0;
}