#include<stdio.h>
#include<stdlib.h>

main()
{
    int mas[100][100];

    int n = 0;
    int m = 0;
    
    while ((n < 1) || (n > 100))
    {
        printf("Ведите колличество строк массива от 1 до 100 включительно ");
        scanf("%i",&n);
    }
    while ((m < 1) || (m > 100))
    {
        printf("Ведите колличество столбцов массива от 1 до 100 включительно ");
        scanf("%i",&m);
    }
    
    printf("Вводите значения двумерного массива построчно через Enter \n");
    
    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            scanf("%i",&mas[j][i]);
        }
    }
   
    printf("\nВведенный массив \n\n");

    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%3i",mas[j][i]);
        }
        printf("\n");
    }

    printf("\n");

    int k = m;
    if(n > k)
    {
        k = n;
    }
    int mas2[100][100];

    for (int j=0; j<k; j++)
    {
        for(int i=0; i<k; i++)
        {
            mas2[j][i]=mas[i][j];
        }
    }
    
    printf("Mассив после инверсии по главной диагонали\n\n");

    for (int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            printf("%3i",mas2[j][i]);
        }
        printf("\n");
    }
    
}

