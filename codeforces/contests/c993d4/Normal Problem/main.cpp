#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        string a;
        cin >> a;
        
        string ans = "";
        for(int j = 0; j < a.length(); j++) {
            if(a[a.length() - j - 1] == 'p') {
                ans += 'q';
            }else if(a[a.length() - j - 1] == 'q') {
                ans += 'p';
            }else ans += 'w';
        }
        cout << ans << "\n";
        ans = "";
    }
}