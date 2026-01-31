#include <bits/stdc++.h>
using namespace std;

// ------------------- Fast IO -------------------
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

// ------------------- Basic Types -------------------
#define ll long long

// ------------------- Input/Output Macros -------------------
#define IN(a) cin >> a
#define print(x) cout << (x) << "\n"

// ------------------- Main Solution Function -------------------

void solve() {
    int n;
    IN(n);

    vector<pair<ll, ll>> trees(n);
    for (int i = 0; i < n; ++i) {
        IN(trees[i].first);
        IN(trees[i].second);
    }

    if (n <= 2) {
        print(n);
        return;
    }

    ll last_occupied = -2000000000LL - 7;

    int felled_count = 0;

    for (int i = 0; i < n; ++i) {
        ll x = trees[i].first;
        ll h = trees[i].second;

        if (x - h > last_occupied) {
            felled_count++;
            last_occupied = x;
        } 
        
        else {
            bool can_fall_right = false;
            
            if (i < n - 1) {
                ll next_x = trees[i+1].first;
                
                if (x + h < next_x) {
                    can_fall_right = true;
                }
            } 
            
            else {
                can_fall_right = true;
            }
            
            if (can_fall_right) {
                felled_count++;
                last_occupied = x + h;
            }
            
            else {
                last_occupied = x;
            }
        }
    }

    print(felled_count);
}

// ------------------- Main Template -------------------
int main()
{
    fastio;
    solve();
    return 0;
}