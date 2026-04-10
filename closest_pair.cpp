#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n,x1,x2,y1,y2;
    cout << "Enter number of points: ";
    cin >> n;

    int x[n], y[n];

    cout << "Enter the points (x y):\n";
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    double min_dist = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double d = sqrt((x[i] - x[j]) * (x[i] - x[j]) +
                            (y[i] - y[j]) * (y[i] - y[j]));

            if (d < min_dist)
            {
                min_dist = d;
                x1=x[i];
                x2=x[j];
                y1=y[i];
                y2=y[j];
            }
        }
    }

    cout << "Minimum distance = " << min_dist << "at points"<< "(" <<x1<<','<<y1<<')'<<'('<<x2<<','<<y2<<')'<< endl;

    return 0;
}