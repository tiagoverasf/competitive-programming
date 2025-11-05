#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {

        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int ans = 0;
        int rest = 0;

        if(a >= m) {
            ans += m;
        }else{
            ans += a;
            rest += m - a;
        }

        if(b >= m) {
            ans += m;
        }else{
            ans += b;
            rest += m - b;
        }

        if(ans != 2*m) {
            if(c >= rest) {
                ans += rest;
            }else ans += c;
        }

        cout << ans << "\n";
        ans = 0, rest = 0;
    }
}