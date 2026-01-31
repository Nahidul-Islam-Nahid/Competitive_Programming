#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        int f = 0, t_count = 0, n = 0;
        string others = "";

        for (char c : s) 
        {
            if (c == 'F') 
            {
                f++;
            }    
            else if (c == 'T') 
            {
                t_count++;
            }
            else if (c == 'N')
            {
                 n++;
            }
            else 
            {
                others += c;
            }
        }

        string result = "";
        result += string(t_count, 'T');
        result += string(f, 'F');
        result += string(n, 'N');
        result += others;

        cout << result << endl;
    }
    return 0;
}
