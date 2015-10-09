#include <stdio.h>

int main(void) {
  char *p1, *p2;
  p2 = "Winter";
  p1 = p2;

  // 文字列の末尾を検索
  while( *p1 != '\0') {
    p1++;
  }

  // 文字列を後ろから出力
  while( p1 > p2 ) {
    p1--;
    putchar(*p1);
  }

  putchar('\n');
  return 0;
}