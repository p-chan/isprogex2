#include<stdio.h>
#include<string.h>

#define MAX 10

typedef struct word_pair {
  char longer_word[10];
  char shorter_word[10];
  char combined_word[20];
  int longer_word_length;
  int shorter_word_length;
} word_pair_t;

word_pair_t create_word_pair(char *a, char *b);

int main(void) {
  word_pair_t date;
  char str1[MAX], str2[MAX];
  
  printf("1つめの文字列を入力してください.\n");
  scanf("%s", str1);

  printf("2つめの文字列を入力してください.\n");
  scanf("%s", str2);

  date = create_word_pair(str1, str2);

  printf("\nlonger_word:\t\t%s\nshorter_word:\t\t%s\ncombined_word:\t\t%s\nlonger_word_length:\t%d\nshorter_word_length:\t%d\n\n", date.longer_word, date.shorter_word, date.combined_word, date.longer_word_length, date.shorter_word_length);

  return 0;
}

word_pair_t create_word_pair(char *a, char *b) {

  word_pair_t date;

  // aの長さ>bの長さ
  if (strlen(a) > strlen(b)) {
    date.longer_word_length = strlen(a);
    date.shorter_word_length = strlen(b);
    strcpy(date.longer_word, a);
    strcpy(date.shorter_word, b);
  }
  // bの長さ<aの長さ
  else if (strlen(a) < strlen(b)) {
    date.longer_word_length = strlen(b);
    date.shorter_word_length = strlen(a);
    strcpy(date.longer_word, b);
    strcpy(date.shorter_word, a);
  }
  // aの長さ=bの長さ
  else {

    date.longer_word_length = strlen(a);
    date.shorter_word_length = strlen(b);  

    if (strcmp(a, b) == 0) {
      printf("error: 同じ文字列が入力されています.\n");
      strcpy(date.longer_word, a);
      strcpy(date.shorter_word, "");
    }
    else if (strcmp(a, b) > 0) {
      date.longer_word_length = strlen(a);
      date.shorter_word_length = strlen(b);
    }
    else {
      strcpy(date.longer_word, b);
      strcpy(date.shorter_word, a);
    }
  }
  
  // スペースを追加
  strcat(date.longer_word, " ");
  strcpy(date.combined_word, date.longer_word);

  strcat(date.combined_word, date.shorter_word);

  return date;
}
