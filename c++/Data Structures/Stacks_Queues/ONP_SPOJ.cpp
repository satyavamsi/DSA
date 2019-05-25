#include<bits/stdc++.h>

using namespace std;

// solution to codechef problem: https://www.spoj.com/problems/ONP/
int main() {
	int t;
	cin >> t;
	while(t > 0){
		char a;
		stack<char> st;
		cin >> a;
		st.push(a);
		while(!st.empty()){
			char s;
			cin >> s;
			if(s == '(' || s == '+' ||
				s == '-' || s == '*' ||
				s == '/' || s == '^'){
				st.push(s);
			}else if(s == ')'){
				while(st.top() != '('){
					cout << st.top();
					st.pop();
				}
				st.pop();
			}else{
				cout << s;
			}
		}
		cout << "\n";
		t--;
	}
}