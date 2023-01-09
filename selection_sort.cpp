#include <iostream>
using namespace std;



void selection_sort(int arr[], int arrSize)
{

    // Sort everything except for the last index because the largest number gets pushed to the end
    for (int i = 0; i < arrSize - 1; i++)
    {
        // Start with the assumption that the index being checked is the lowest value
        int min = i;

        for(int j = i+1; j < arrSize; j++)
        {
            // If another element ends up being less than the min (index we are checking), then update it so we can swap
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp;
        // Only swap if the current index was not the smallest
        if (min != i)
        {
            // Save the element being checked
            temp = arr[i];

            // Swap the element being checked with the minimum element we found
            arr[i] = arr[min];

            // Swap the minimum index's element with the element of the index being checked
            arr[min] = temp;


        }
    }

}

int main()
{

    int arrSize = 5;

    int arr[arrSize] = {64, 64, 12, 22, 11};

    cout << "Before selection sort " << endl;

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selection_sort(arr, arrSize);
    cout << "After selection sort " << endl;

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

  
    return 0;
}