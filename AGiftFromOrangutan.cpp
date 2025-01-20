#include <iostream>
using namespace std;

int main() {
    int k;
    cin>>k;
    for(int i=0; i<k; i++){
        long n;
        cin >> n;
        long min=10000000, max=0;
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            min= (min<x ? min: x);
            max= (max<x ? x: max);
            
        }
        printf("%ld\n", (n-1)*(max-min));
        
        
    }
   return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         vector<int> b(n), c(n);
//         // Calculating b and c arrays
//         for (int i = 0; i < n; i++)
//         {
//         sort(a.begin(), a.end(), greater<int>()); 
//             // int max = a[i];
//             int min = a[i];

//             for (int j = 0; j <= i; j++)
//             {
//                 // if (max < a[j])
//                 // {
//                 //     max = a[j];
//                 // }

//                 if (min > a[j])
//                 {
//                     min = a[j];
//                 }
//             }
//                     // c[i] = max;
//                     b[i] = min;
//         }

//         // vector<int> x(n);
//         // long long sum = 0;
//         // for (int i = 0; i < n; i++)
//         // {
//         //     x[i] = c[i] - b[i];
//         //     sum += x[i];
//         // }
//         for (int i = 0; i <n; i++)
//         {
//             cout<<b[i];
//         }
        
//         // cout << sum << endl;
//     }

//     return 0;
// }

// A. A Gift From Orangutan
// time limit per test1 second
// memory limit per test256 megabytes
// While exploring the jungle, you have bumped into a rare orangutan with a bow tie! You shake hands with the orangutan and offer him some food and water. In return...

// The orangutan has gifted you an array a
//  of length n
// . Using a
// , you will construct two arrays b
//  and c
// , both containing n
//  elements, in the following manner:

// bi=min(a1,a2,…,ai)
//  for each 1≤i≤n
// .
// ci=max(a1,a2,…,ai)
//  for each 1≤i≤n
// .
// Define the score of a
//  as ∑ni=1ci−bi
//  (i.e. the sum of ci−bi
//  over all 1≤i≤n
// ). Before you calculate the score, you can shuffle the elements of a
//  however you want.

// Find the maximum score that you can get if you shuffle the elements of a
//  optimally.

// Input
// The first line contains t
//  (1≤t≤100
// ) — the number of test cases.

// The first line of each test case contains an integer n
//  (1≤n≤1000
// ) — the number of elements in a
// .

// The following line contains n
//  integers a1,a2,…,an
//  (1≤ai≤1000
// ) — the elements of the array a
// .

// It is guaranteed that the sum of n
//  over all test cases does not exceed 1000
// .

// Output
// For each test case, output the maximum score that you can get.

// Example
// InputCopy
// 3
// 1
// 69
// 3
// 7 6 5
// 5
// 1 1 1 2 2
// OutputCopy
// 0
// 4
// 4
// Note
// In the first test case, there is no other way to rearrange a
// . So, b=[69]
//  and c=[69]
// . The only possible score is 69−69=0
// .

// In the second test case, you can rearrange a
//  as [7,5,6]
// . Here, b=[7,5,5]
//  and c=[7,7,7]
// . The score in this case is (7−7)+(7−5)+(7−5)=4
// . It can be shown this is the maximum possible score.


