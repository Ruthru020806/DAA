#include <iostream>
using namespace std;

int main()
{
    int n, temp, minIndex;
    int * a;

    cout << "Enter number of elements: ";
    cin >> n;

    a = new int[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
       cin >> a[i];
    }

        cout << "Before Sorting:\n";
    for(int i = 0; i < n; i++)
    {
       cout << a[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < n-1; i++)
    {
        minIndex = i;

        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }


        if(minIndex != i)
        {
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++)
    {
       cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
