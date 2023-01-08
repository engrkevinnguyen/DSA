#include <iostream>
using namespace std;


int binary_search(int arr[], int x, int arraySize)
{
    int leftIndex = 0;
    int rightIndex = arraySize;
    int midIndex;

    // While the right index is not less than the left index and while the left index is not greater than the right index
    while(leftIndex <= rightIndex)
    {
        midIndex = (leftIndex + rightIndex)/2;

        if (arr[midIndex] == x)
        {
            return midIndex;
        }
        // If the current middle index is smaller than what we are looking for, adjust the left index to look on the right side
        else if (arr[midIndex] < x)
        {
            leftIndex = midIndex + 1;
        }
        // Else the current middle index is greater than what we are looking for, adjust the right index to look on the left side
        else
        {
            rightIndex = midIndex - 1;
        }
    }

    return -1;

}

int main()
{

    int arraySize;
    int toFind;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int arr[arraySize]; 

    cout << "Enter the elements of the array from descending order to ascending order: ";
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }

    
    cout << "Enter the element you want to find the index of: ";
    cin >> toFind;

    int result = binary_search(arr, toFind, arraySize);
    
    if (result == -1)
    {
        cout << "Could not find that element in the array." << endl;
    }
    else
    {
        cout << "That element is at the index " << result << endl;
    }

    return 0;
}