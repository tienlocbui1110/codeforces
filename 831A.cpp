#include <iostream>

using namespace std;

int main()
{
    int A[10000],n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> A[i];
    if (n == 1){
        cout << "YES";
        return 0;
    }
    int i=0;
    while((i+1 < n) && (A[i] < A[i+1]))
    {
        i++;
    }
    while((i+1 < n) && (A[i] == A[i+1]))
    {
        i++;
    }
    while((i+1 < n) && (A[i] > A[i+1]))
    {
        i++;
    }

    if (i+1 == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
