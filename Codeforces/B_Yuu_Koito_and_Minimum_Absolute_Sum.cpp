#include <bits/stdc++.h>
using namespace std;

// ------------------- Fast IO -------------------
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

// ------------------- Basic Types -------------------
#define ll long long
#define ull unsigned long long

// ------------------- Loops -------------------
#define loop(i,n) for(int i = 0; i < (n); i++)
#define range(i,l,r) for(int i = (l); i <= (r); i++)

// ------------------- Vector & Array -------------------
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define pb push_back

// ------------------- Input Macros -------------------
#define IN(a) cin >> a
#define IN2(a,b) cin >> a >> b
#define IN3(a,b,c) cin >> a >> b >> c

#define INV(v,n) loop(i,n) cin >> v[i]

// ------------------- Print Macros -------------------
#define print(x) cout << (x) << "\n"
#define printline(s) cout << s << "\n"


// ------------------- Main Template -------------------
int main()
{
    fastio;

    int t;
    IN(t);

    while(t--)
    {
        int n;
        IN(n);
        vector<int> v(n);
        INV(v, n);
        if(v[0] == -1)
            v[0] = v[n-1];

        if(v[n-1] == -1)
            v[n-1] = v[0];
        loop(i, n)
        {
            if(v[i] == -1)
                v[i] = 0;
        }
        print(abs(v[n-1] - v[0]));
        loop(i, n)
            cout << v[i] << (i+1 == n ? '\n' : ' ');
    }

    return 0;
}
