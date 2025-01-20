
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (is_sorted(a, a + n))
        {
            cout << "YES" << endl;
            continue;
        }
        bool possible = false;

        for (int i = 0; i < n - 1; i++)
        {
            long long min_val = min(a[i], a[i + 1]);
            a[i] -= min_val;
            a[i + 1] -= min_val;
            if (a[i] > a[i + 1])
            {
                if (is_sorted(a, a + n))
                {
                    possible = true;
                    break;
                }

                a[i] += min_val;
                a[i + 1] += min_val;
            }
            else
            {
                if (is_sorted(a, a + n))
                {
                    possible = true;
                    break;
                }
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
//  using namespace std;
//   int main()
//    {
//      int t;
//      cin >> t;
//      while (t--)
//       { int n;
//        cin >> n;
//        int count;
//         long long a[n];
//          for (int i = 0; i < n; i++) {
//             cin >> a[i];
//       }
//         if (is_sorted(a,a+n)==true){
//             cout << "YES" << endl;
//         }
//         else{
//             for (int i = 0; i < n; i++)
//             {
//                 a[i] = a[i] - min(a[i],a[i+1]);
//                 a[i+1] = a[i+1] - min(a[i],a[i+1]);

//                 if (is_sorted(a,a+n)==true)
//                 {
//                     cout << "YES" << endl;
//                     break;
//                 }
//                  a[i] += min(a[i],a[i+1]);
//             a[i+1] += min(a[i],a[i+1]);
//             }

//         }
//         if(is_sorted(a,a+n)==false)
//         {
//             cout<<"NO"<<endl;
//         }
//       }

//    }

// 5
// 5
// 1 2 3 4 5
// 4
// 4 3 2 1
// 4
// 4 5 2 3
// 8
// 4 5 4 5 4 5 4 5
// 9
// 9 9 8 2 4 4 3 5 3
// OutputCopy
// YES
// NO
// YES
// YES
// NO
