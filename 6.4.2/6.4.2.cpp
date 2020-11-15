#include <stdio.h>
#define N 5
int main()
{
    int  arr[N];

    for (int i = 0; i < N; i++)
    {
        printf("Enter a number: ");
        scanf_s("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        printf("%-5d", arr[i]);
    }
    printf("\n");
    int max, indmax = 0;
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
            max = arr[i];
        else if (max < arr[i])
            max = arr[i];
        indmax = i;


    }
    int sum = 0;
    for (int i = indmax; i < N; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}