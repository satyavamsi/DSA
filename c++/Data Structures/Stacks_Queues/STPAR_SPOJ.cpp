#include<bits/stdc++.h>

using namespace std;

// function for codechef problem : https://www.spoj.com/problems/STPAR/
bool isPossible(queue<int> dq, int n){

	int k = 1;
	stack<int> s;
	while(!dq.empty()){
		if(dq.front() == k){
			dq.pop();
			k++;
		}else if(s.empty()){
			s.push(dq.front());
			dq.pop();
		}else if(s.top() == k){
			s.pop();
			k++;
		}else{
			if(dq.front() < s.top()){
				s.push(dq.front());
				dq.pop();
			}else{
				return false;
			}
		}
	}
	while(!s.empty()){
		if(s.top() == k){
			s.pop();
			k++;
		}else{
			return false;
		}
	}
	return true;
}

int main() {
	while(true){
		int n;
		cin >> n;
		if(n == 0){
			break;
		}else{
			queue<int> q ;
			for(int i=0; i< n; i++){
				int a;
				cin >> a;
				q.push(a);
			}

		bool res = isPossible(q, n);
			if(res){
				cout << "yes" << "\n";
			}else{
				cout << "no" << "\n";
			}
		}
	}
}

