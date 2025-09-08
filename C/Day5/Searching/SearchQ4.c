#include <stdio.h>
#include <stdlib.h>

void search(int **arr, int m, int n, int x)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == x)
            {
                printf("Found at position: %i,%i\n", i, j);
                continue;
            }
        }
    }
}

int main()
{
    int m, n;
    printf("Enter dimensions (m n): ");
    scanf("%d %d", &m, &n);

    // Allocate memory for rows
    int **arr = (int **)malloc(m * sizeof(int *));
    
    // Allocate memory for columns in each row
    for (int i = 0; i < m; i++)
    {
        arr[i] = (int *)malloc(n * sizeof(int));
    }

    // Input array elements
    printf("Enter array elements:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int x;
    printf("Enter element to search: ");
    scanf("%d", &x);

    search(arr, m, n, x);

    // Free allocated memory
    for (int i = 0; i < m; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}