#include <iostream>
#include <array>
using namespace std;
int bribedQue(int array[], int size)
{
    int key, j;
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
            count++;
        }
        array[j + 1] = key;
    }
    return count;
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 8, 6, 7};
    int result = bribedQue(arr, 8);
    cout << "the number of bribes were : " << result;
    return 0;
}