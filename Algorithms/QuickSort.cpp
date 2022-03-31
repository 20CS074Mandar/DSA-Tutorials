#include <iostream>
using namespace std;

int partition(int a[], int low, int high)
{
        int pivot = a[low];
        int i = low + 1;
        int j = high;
        do
        {
                while (a[i] <= pivot)
                {
                        i++;
                }
                while (a[j] > pivot)
                {
                        j--;
                }
                if (i < j)
                {
                        int temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                }
        } while (i < j);

        int temp=a[low];
        a[low]=a[j];
        a[j]=temp;
        return j;
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

void quickSort(int a[], int l, int h)
{
        if (l < h)
        {
                int partitionIndex; // index of pivot after partition
                partitionIndex = partition(a, l, h);
                quickSort(a, l, partitionIndex - 1); // sort left subarry
                quickSort(a, partitionIndex + 1, h); // sort right subarry
        }
}

int main()
{
        int arr[] = {64, 25, 12, 22, 11};
        int n = sizeof(arr) / sizeof(arr[0]);
        quickSort(arr,0,n-1);
        cout << "Sorted array: \n";
        printArray(arr, n);
        return 0;
        return 0;
}