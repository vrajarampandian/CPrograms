/* Array Rotation - store the first element of the array in a temporary varaiable.
    - Shift the rest of the elements in the original array by one place 
    - Update the last index of the array with the temporay variable */

#include<stdio.h>
void arrayrotation(int a[],int p, int n)
{
    int d =1 ;
    while(d <=p) {
        int last = a[0];
        for(int i =0;i<n-1;i++) {
            a[i] = a[i+1];
        }
        a[n-1] = last;
        d++;
    }
}
int main()
{
    int a[] = {1,2,3,4,5};
    arrayrotation(a,2,5);
    for(int i =0;i <5;i++)
        printf("%d\n",a[i]);

}