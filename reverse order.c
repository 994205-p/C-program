#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of Elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements :");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Reverse order : ");
    for(int i=n-1; i>=0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;

}
