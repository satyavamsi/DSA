#include <bits/stdc++.h>

using namespace std;

//link to the code forces problem: http://codeforces.com/problemset/problem/281/D

typedef long long int ll;

int main() {
	int n;
	cin >> n;
	ll s[n];
	stack<ll> st;
	ll ans = 0;
	for(int i=0; i< n; i++){
		cin >> s[i];
	}

	for(int i=0; i< n; i++){
		while(!st.empty()){
			if(st.top() < s[i]){
				ans=max(ans,st.top() xor s[i]);
				st.pop();
			}else{
				ans = max(ans, st.top() xor s[i]);
				break;
			}
		}
		st.push(s[i]);
	}

	cout<<ans<<endl;
}