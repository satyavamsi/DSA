#include <bits/stdc++.h>

using namespace std;

// link to the codechef problem: https://www.codechef.com/submit/SALARY
int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		int w[n];
		int sum = 0;
		int minInd = 0;
		for(int i=0; i < n; i++){
			cin >> w[i];
			sum += w[i];
			if(w[i] < w[minInd]){
				minInd = i;
			}
		}
		int count = sum - n*w[minInd];

		cout << count  << endl;
		t--;
	}
}