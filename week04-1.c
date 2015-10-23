#include <stdio.h>

void swap(int x, int y);

int main(void) {
  int x, y;
  x = 2;
  y = 5;
  printf("x=%d, y=%d\n", x, y);
  swap(x, y);
  printf("x=%d, y=%d\n", x, y);

  return 0;
}

void swap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
}

/*
  期待した動作をしなかった理由:
  swap変数の中で入れ替えてもmain関数内のint型変数x, yの値は書き換わらないから
*/