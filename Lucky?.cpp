#include<bits/stdc++.h>
using namespace std;

int main(){
 	int l;
 	cin >> l;
 	
 	while(l--){
 		string s;
 		cin >> s;
 		int a = 0, b = 0;
		
		for(int i = 0; i < s.length(); i++) {
			if(i <= 2){
				a += s[i];
			}
			else{
				b += s[i];
			}
		}	
		if(a == b){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}
