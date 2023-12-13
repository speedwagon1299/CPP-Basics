/*#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the strings: " << endl;

}*/
/*
* Complete the 'reverseArray' function below.
*
* The function is expected to return an INTEGER_ARRAY.
* The function accepts INTEGER_ARRAY arr as parameter.
*/

/*
* To return the integer array from the function, you should:
* - Store the size of the array to be returned in the result_count variable
* - Allocate the array statically or dynamically
*
* For example,
* int* return_integer_array_using_static_allocation(int* result_count) {
* *result_count = 5;
*
* static int a[5] = {1, 2, 3, 4, 5};
*
* return a;
* }
*
* int* return_integer_array_using_dynamic_allocation(int* result_count) {
* *result_count = 5;
*
* int *a = malloc(5 * sizeof(int));
*
* for (int i = 0; i < 5; i++) {
* *(a + i) = i + 1;
* }
*
* return a;
* }
*
*/
#include <stdio.h>
#include <stdlib.h>
int* reverseArray(int arr_count, int *arr) 
{
    static int i;
    int swap = *(arr+i);
    *(arr+i) = *(arr+arr_count-i);
    *(arr+arr_count-i) = swap;
    return &arr[i++];
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int i; 
    for(i = 0; i < 8; i++)
    {
        printf("%d ",*reverseArray(8,arr));
    }
}
