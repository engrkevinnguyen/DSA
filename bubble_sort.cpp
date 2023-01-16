#include <iostream>
using namespace std;


void bubble_sort(int arr[], int arrSize)
{
    int i = 0;
    int j = 0;
    int temp;
    // We have arrSize - 1 because if we sort all of n - 1, then the array is already sorted
    for (i = 0 ; i < arrSize - 1; i++)
    {
        // We have (arrSize - 1 - i) so that we continue to only sort through the unsorted array. The rightside will already have the largest number bubble up there
        for (j = 0; j < (arrSize - 1 - i) ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int main()
{

    int arrSize = 5;
    int arr[arrSize] = {16, 32, 11, 1, 3};
    cout << "Before bubble sort: " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    bubble_sort(arr, arrSize);
    cout << "After bubble sort: " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

 
    return 0;
}