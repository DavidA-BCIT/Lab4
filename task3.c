#include <stdio.h>

/* Task 3 */
int main() {
  char s[100];
  scanf("%s",s);
  for (int i = 1; s[i+1] != '\0'; i++) {
    printf("%c",s[i]);
  }
  return 0;
}