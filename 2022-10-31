#include <stdio.h>

int even_digits_count(int n) {
  // число четных цифр, используемых в записи натурального числа
  int cnt = 0;
  for (; n; n /= 10) cnt += (n + 1) & 1;
  return cnt;
}

int main(int argc, char *argv[]) {
  printf("число четных цифр, используемых в записи натурального числа %d\n",
         even_digits_count(11124));
}
