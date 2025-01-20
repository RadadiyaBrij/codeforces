#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long a[n]; 
        int score = 0;
        for (long long i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        for (long long i = 0; i < n-1; i++)
        {
            for (long long j = i+1; j < n; j++)
            {
                if (a[i] + a[j] == k) { 
                    score++; 
                    a[i] = a[j] = LONG_LONG_MAX; 
                    break;
                    
            }
            
            
        }
        }
        cout<<score<<endl;
    }
    return 0;
}


// 4
// 4 4
// 1 2 3 2
// 8 15
// 1 2 3 4 5 6 7 8
// 6 1
// 1 1 1 1 1 1
// 16 9
// 3 1 4 1 5 9 2 6 5 3 5 8 9 7 9 3
// OutputCopy
// 2
// 1
// 0
// 4