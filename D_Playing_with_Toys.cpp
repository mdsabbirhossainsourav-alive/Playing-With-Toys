#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,m;
    cin >> n >> m;
    int remaining = max(0,n-m);
    cout << remaining << endl;
    return 0;
}
