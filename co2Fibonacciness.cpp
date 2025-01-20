#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }
        long long a3[3];
        a3[0] = a[0] + a[1];
        a3[1] = a[2] - a[1];
        a3[2] = a[3] - a[2];
        int maxcount = 0;
        for (int i = 0; i < 3; i++)
        {
            int count = 0;
            if ((a[0] + a[1]) == a3[i])
            {
                count++;
            }
            if (a[2]==(a3[i] + a[1]))
            {

                count++;
            }
            if (a[3] == (a[2] + a3[i]))
            {
                count++;
            }

            if (maxcount < count)
            {
                maxcount = count;
            }
        }

        cout << maxcount << endl;
    }
}

// 6
// 1 1 3 5
// 1 3 2 1
// 8 10 28 100
// 100 1 100 1
// 1 100 1 100
// 100 100 100 100
// OutputCopy
// 3
// 2
// 2
// 1
// 1
// 2
