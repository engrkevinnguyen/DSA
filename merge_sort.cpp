#include <iostream>
using namespace std;


void merge(int arr[], int mid, int leftIndex, int rightIndex)
{

    // These two are for keeping the temporary array index and the first sorted array's index
    int i = 0, j = 0;

    // This is for keeping the second sorted array's index in arr
    int k = mid + 1;

    int arrSize = rightIndex - leftIndex + 1;
    int tempArr[arrSize];

    while (i <= mid && k <= rightIndex)
    {
        if (arr[i] < arr[k])
        {
            tempArr[j] = arr[i];
      
            i++; 
            j++;
        }
        else
        {
            tempArr[j] = arr[k];

            k++; 
            j++;
        }
    }

    // If we had one subarray exhausted, complete the other one.
    while (i <= mid)
    {
    
        tempArr[j] = arr[i];
   
        i++; 
        j++;
        
    }

    while (k <= rightIndex)
    {

        tempArr[j] = arr[k];
   
        k++; 
        j++;
        
    }

    // Copy over the temporary array to the array
    for (int counter = 0; counter < arrSize; counter++)
    {
        arr[counter] = tempArr[counter];
   
    }


}

void mergeSort(int arr[], int leftIndex, int rightIndex)
{
    if (leftIndex < rightIndex)
    {
        int mid = (leftIndex + rightIndex)/2;

        mergeSort(arr, leftIndex, mid);
        mergeSort(arr, mid + 1, rightIndex);

        merge(arr, mid, leftIndex, rightIndex);
  

    }

}


int main()
{
    int arrSize = 5;
    int testArr[arrSize] = {5, 2, 16, 8, 9};

    cout << "Before Merge Sort" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << testArr[i] << " ";
    }

    cout << endl;
    mergeSort(testArr, 0, arrSize-1);

    cout << endl;

    cout << "After Merge Sort" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << testArr[i] << " ";
    }

    return 0;

}