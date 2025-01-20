#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;

        if (a>=b)
        {
            cout<<a<<endl;
        }
        else{
            int maxdeposit=0;
            for (int i = 0;i<=a/2; i++)
            {
                if ((a-i)>=(b-(2*i)))
                {
                    maxdeposit=max(a-i,maxdeposit);
                }
            }
            cout<<maxdeposit<<endl;
        }

    }
    return 0;

}
