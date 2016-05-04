#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,A[100000],B[100000];
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> A[i];
        B[i] = A[i];
    }

    sort(B,B+n);

    int sum=0,ans=0;

    // Find sement in A & B can tranfer
    for (int i=0; i<n; i++)
    {
        sum+= A[i] - B[i];
        if (!sum)
            ans++;
    }

    cout << ans;
}
