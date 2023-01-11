#include <iostream>
using namespace std;


void insertion_sort(int arr[], int arrSize)
{

    int value;
    int j;
    // Iterate through every single element of the array excluding the first one since we start with
    // that one in our comparison
    for (int i = 1; i < arrSize; i ++)
    {
        value = arr[i];
        
        // J will start at the index behind the one we are looking at
        j = i - 1;

        // While j has not gone out of bounds on the left, sorted array & j is still greater than i
        while (j >= 0 && (arr[j] > value))
        {
            // Shift j over to the right 
            arr[j + 1] = arr[j]; 
            j = j - 1;
        }

        // If we are here, then j has gone out of bounds. In which case, everything on the left was less than value or value was greater than the j index element being checked
        arr[j + 1] = value;


    }
}
int main()
{
    int arrSize = 5;
    int arr[arrSize] = {12, 64, 32, 54, 11};
    cout << "Before insertion sort: " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    insertion_sort(arr, arrSize);
    cout << "After insertion sort: " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}