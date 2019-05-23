#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

// link to the codechef problem: https://www.codechef.com/problems/CSUB
int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n;
		string s;
		cin >> n >> s;
		LL ans = 0;
		int count = 0;
		for(int i=0; i < n ; i++){
			if(s[i] == '1'){
				count++;
				ans += (long long) (count);
			}
		}
		cout << ans << endl;
		t--;
	}
}