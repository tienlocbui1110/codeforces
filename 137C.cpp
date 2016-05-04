#include <bits/stdc++.h>

using namespace std;

struct times {
    int bdau;
    int kthuc;
};

bool soSanh (times i, times j) { return (i.bdau < j.bdau);}


int main()
{
    int n;
    times A[100000];

    cin >> n;
    for (int i=0; i<n; i++)
        cin >> A[i].bdau >> A[i].kthuc;

    sort(A,A+n,soSanh);

    int ans = 0, maxx = A[0].kthuc;
    for (int i=1; i<n; i++)
    {
        if (A[i].kthuc < maxx)
            ans++;
        else
            maxx = A[i].kthuc;
    }

    cout << ans;
}
