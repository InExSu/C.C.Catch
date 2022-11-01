#include <stdio.h>

int even_digits_count(int n)
{ // число четных цифр, используемых в записи натурального числа
  int cnt = 0;
  for (; n; n /= 10)
    cnt += (n + 1) & 1;
  return cnt;
}

void print_array2_int(int *arr, int row_Max, int col_Max)
{ // массив двумерный на экран
  for (int row = 0; row < row_Max; row++)
  {
    for (int col = 0; col < col_Max; col++)
      printf("%5d", *(arr + row * col_Max + col));
    printf("\n");
  }
}

int main(int argc, char *argv[])
{
  printf("число четных цифр, используемых в записи натурального числа %d\n",
         even_digits_count(11124));

  int m[3][5] = {0};
  print_array2_int(&m[0][0], 3, 4);
}
