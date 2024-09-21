#include <stdio.h>
void main()
{
    int i, j, k, begin, num, rows;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 5 - i; j > 0; j--)
        {
            printf("  ");
        }
        begin = 2 * i - 1;
        num = begin;
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("%2d", num);
            num++;
        }
        printf("\n");
    }
}
