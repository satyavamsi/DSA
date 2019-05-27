#include <bits/stdc++.h>

using namespace std;


//link to SPOJ problem: https://www.spoj.com/problems/ANARC09A/
int main() {
	int t = 1;
	while(true){
		string s;
		cin >> s;
		int n = s.length();
		int d = 0;
		int reverse = 0;
		if(s[0] == '-'){
				break;
			}
		for(int i = 0; i < n; i++){
			if(s[i] == '{'){
				d++;
			}else if(s[i] == '}' && d > 0){
				d--;
			}else if(s[i] == '}' && d <= 0){
				d++;
				reverse++; 
			}
		}

		reverse = reverse + ceilf(d/2.00);
		cout << t << ". " <<reverse << "\n";
		t++;
	}
}