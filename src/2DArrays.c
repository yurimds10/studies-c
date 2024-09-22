#include <stdio.h>

int multiDimensionalArrays()
{
  // 2D array = an array, where each element is an entire array
  //          = useful if you need a matrix, grid, or table of data

  int numbers[2][3] = {
                        {1, 2, 3},
                        {4, 5, 6}
                      };

  int numbers2[3][3];

  int rows = sizeof(numbers2)/sizeof(numbers2[0]);
  int columns = sizeof(numbers2[0])/sizeof(numbers2[0][0]);

  printf("rows: %d\n", rows);
  printf("columns: %d\n", columns);

  numbers2[0][0] = 1;
  numbers2[0][1] = 2;
  numbers2[0][2] = 3;
  numbers2[1][0] = 4;
  numbers2[1][1] = 5;
  numbers2[1][2] = 6;
  numbers2[2][0] = 7;
  numbers2[2][1] = 8;
  numbers2[2][2] = 9;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      printf("%d ", numbers2[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
