#include <bits/stdc++.h>

using namespace std;

// link to codechef problem: https://www.codechef.com/problems/CNOTE

int main(){

	int t;
	cin >> t;
	while(t > 0){
		int x,y,n,k;
		cin >> x >> y >> k >> n;
		int p, c;
		bool lucky = false;
		for(int i = 0; i< n ;i++){
			cin >> p >> c;
			if(p >= x - y && c <= k && lucky == false){
				lucky = true;
			}
		}
		if(lucky){
			cout << "LuckyChef" << '\n';
		}else{
			cout << "UnluckyChef" << '\n';
		}
		t--;
	}
}