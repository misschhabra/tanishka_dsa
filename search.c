#include<stdio.h>
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10]={5,5,5,5,5};
    int n=5;
    printf("%d\n", search(arr, n, 5));
    return 0;
}