#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

typedef long long ll;

int N;
ll x, mx, sum;

int main()
{
    scanf("%d", &N);
    scanf("%lld", &mx);

    for (int i = 0; i < N-1; i++)
    {
        scanf("%lld", &x);
        mx = max(mx, x);
        sum += (mx - x);
    }
    printf("%lld\n", sum);

    return 0;
}