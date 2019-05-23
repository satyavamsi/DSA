#include <bits/stdc++.h>

using namespace std;

// link to the codechef problem: https://www.codechef.com/problems/FRGTNLNG
int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n, k, l;
		vector <string> phrase[55];

		string lang[109];

		cin >> n >> k;

		for(int i=0; i< n; i++){
			cin >> lang[i];
		}

		for(int i=0; i<k;i++){
			cin >> l;
			for(int j=0; j < l; j++){
				string s;
				cin >> s;
				phrase[i].push_back(s);
			}
		}
		for (int i = 0; i < n; i++){
	    	string answer = "NO";

		    //traverse over all phrases
		    for(int j = 0; j < k; j++){

		        //traverse over phrase[j]
		        for(int k = 0; k < phrase[j].size(); k++){
		            if(phrase[j][k] == lang[i]){
		                answer = "YES";
		            }
		        }
		    }

	    	cout << answer << (i==n-1 ? "\n" : " ");
		}
		t--;
	}
}