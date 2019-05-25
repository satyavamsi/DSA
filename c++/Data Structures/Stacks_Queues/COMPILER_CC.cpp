#include <bits/stdc++.h>

using namespace std;

//function for codechef problem: https://www.codechef.com/problems/COMPILER
int main(){
	int t;
	string s;
	cin >> t;
	while(t>0){
		cin >> s;
		int n = s.length();
		int count = 0;
		int b = 0;
		for(int i=0; i<n; i++){
			if(s[i]=='>')
			b--;
		else
			b++;
		if(b==0)
			count=i+1;
		else if(b<0)
			break;
		}
		
		cout << count << "\n";
		t--;
	}
}