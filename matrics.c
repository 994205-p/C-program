#include<stdio.h>
int main()
{
    int row,col;
    printf("enter the row: ");
    scanf("%d", row);
    printf("enter the col: ");
    scanf("%d",col);
    int num[row][col];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            scanf("%d", num[row][col]);
        }
    }
}
