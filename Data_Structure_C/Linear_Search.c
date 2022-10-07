/* Linear Search in C */
#include<stdio.h>
int serach(int arr[], int size, int val) {
    for(int i = 0; i < size ;i++) { 
        if (arr[i] == val)
            return arr[i];
    }
    return -1;
}

int main()
{
    int arr[] = { 3, 4,54,55,66};
    int val = 50;
    int size = sizeof(arr) / sizeof(arr[0]);
    int ret = -1;
    ret = serach(arr, size, val);
    printf("Result is %d\n", ret);
    return 0;
}