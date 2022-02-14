#include <iostream>
using namespace std;

int linearsearc(int arr[], int val)
{
        for (int i = 0; i < sizeof(arr); i++)
        {
                if (arr[i] == val)
                {
                        return i;
                }
        }
        return 0;
}

int binary_search(int a[], int val, int size)
{
        int high = 0;
        int low = 0;
        while (high - low > 0)
        {
                int mid = (high + low) / 2;
                if (a[mid] == val)
                {
                        return mid;
                }
                else if (a[mid] > val)
                {
                        high = mid - 1;
                }
                else
                {
                        low = mid + 1;
                }
        }
        if (a[low] == val)
        {
                return low;
        }
        if (a[high] == val)
        {
                return high;
        }

        return -1;
}
int main()
{

        return 0;
}