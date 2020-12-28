#include <stdio.h>
#include <string.h>

int findFrequency(const char c, const char *word) {
  short count = 0;

  for (int i = 0; i < strlen(word) - 1; i++) {
    // prints ASCII code, char and i
    // printf("ASCII = %d, %c, %d \n", word[i], word[i]);

    if (c == word[i]) {
      count++;
    }
  }

  return count;
}

int main() {
  char str[] = "helloowoorld";
  char toFind = 'o';
  short freq = findFrequency(toFind, str);

  printf("Letter \"%c\" repeats %hu times\n", toFind, freq);
  return 0;
}
