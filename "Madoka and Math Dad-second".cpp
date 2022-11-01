#include <bits/stdc++.h>

using namespace std;


string solve(int x, int a , int b){
    string s = "";
    int sum = 0;
    while(sum < x){
        sum  +=a;
        s += to_string(a);
        if(sum == x)
            break;
        sum  +=b;
        s += to_string(b);
        if(sum == x)
            break;
    }
    if(x == sum)
        return s;
    return "Empty";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int l;
    cin >> l;

    while(l--){
        int x;
        cin >>x;
        string s1 = solve(x,1,2);
        string s2 = solve(x,2,1);
        if(s2 != "Empty")
            cout << s2 << "\n";
            
        else {
             cout << s1 << "\n";
        }

    }
}
