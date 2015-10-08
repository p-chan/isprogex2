#include <stdio.h>

int main(void){

  FILE *fp;
  char str[256];
  int i = 0;

  if((fp = fopen("./_source/gifts.dat", "r")) == NULL) {
    printf("gifts.datが見つかりません.");
  }

  fscanf(fp, "%d", &str);

  while(fscanf(fp, "%s", &str ) != EOF) {
    printf("%s ", str);

    i++;
    if (i % 3 == 0) {
      printf("\n");
    } else {
      printf(" ");
    }
  };

  fclose(fp);

  return 0;
}
