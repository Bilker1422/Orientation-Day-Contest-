


#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int l;
    cin >> l;
    while(l--){
        int x;
        cin >>x;
        string s1 = "";
        int sum  = 0 ;

        bool flag = true;
        while(sum < x){
            sum += 2;
            s1 += to_string(2);
            if ( sum == x){
                flag = false;
                break;
            }
            sum  += 1;
            s1 += to_string(1);
            if ( sum == x){
                flag = false;
                break;
            }
        }
        if(flag){
            s1 = "";
            sum = 0;
            while(sum < x){
                sum += 1;
                s1 += to_string(1);
                if ( sum == x){
                    flag = false;
                    break;
                }
                sum  += 2;
                s1 += to_string(2);
                if ( sum == x){
                    flag = false;
                    break;
                }
            }
        }
        cout << s1 << "\n";

    }
}
