#include<stdio.h>
int binarysearch(int arr[], int val, int x, int y) {

    while (x <= y) {
        int m = x + (y - x) / 2;

        if (arr[m] == val)
            return m;

        if (arr[m] < val)
            x = m + 1;
        
        else
            y = m - 1;

    }

    return -1;

}

int main()
{

    int arr[] = {12, 13 , 45, 46, 58, 80, 100, 120, 140, 166, 180, 200};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int i = 200;
    int resul  = binarysearch(arr, i, 0,n-1);
    printf("Result Position %d \n", resul);
    return 0;
}