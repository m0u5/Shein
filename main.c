#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

    int main()
    {
        int n, i;
        int *arr;
        size_t simple[4] = {2, 3, 5 ,7}, check = 0, count = 0;
        if (printf("enter a number: ") < 0)
            return 1;
        if (scanf("%d", &n) < 0)
            return 2;
        if (n < 2)
            return 3;

        arr = (int*)malloc(sizeof(int)*n);
        for (i = 0; i<n; i++)
            arr[i] = 0;
          for (i = 2; i <= n; i++)
        {
         for(int j = 0; j<4; j++)
                {
                if((i>7  && i%simple[j] == 0) || (i<7 && (i == 4 || i == 6) ))
                check = 1;
                }
            if (check == 0)
            {
                arr[count] = i;
                ++count;
            }
            check = 0;
        }
         count = 0;
        for (int j = 0; j<n; j++)
        {

            if (arr[j]!=0)
            {
                printf("%d ", arr[j]);
                ++count;
                if (count % 20 == 0)
                {
                    printf("\n");
                }
            }
        }
        free(arr);
        arr = NULL;
        getch();
        return 0;
    }

