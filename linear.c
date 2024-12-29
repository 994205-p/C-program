#include<stdio.h>
int main()
{
    int n;
    printf("Enter Array size : ");
    scanf("%d", &n);

    int target;
    printf("Enter the target value : ");
    scanf("%d", &target);

    int nums[n];
    printf("Enter the array elements : ");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int found=0;
    int index;
    for(int i=0; i<n; i++)
    {
        if(nums[i]==target)
        {
            found=1;
            index=i;
        }
    }
    if(found==1)
    {
        printf("Elements found at : %d", index);
    }
    else
    {
        printf("Not found");
    }
    return 0;
}
