#include <bits/stdc++.h>

using namespace std;

// link to the codechef problem

bool is_rainbow(int arr[],int n, int req[]){
	for(int i=0;i <7;i++){
		if(req[i] == 0){
			return false;
		}
	}
	for(int i=0; i<= n/2; i++){
		if(arr[i] != arr[n-i-1]){
			return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int req[7] = {0};
		int n;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
			if(arr[i] <= 7){
				req[arr[i]-1] = 1;
			}
		}

		cout << (is_rainbow(arr, n, req) ? "yes" : "no") << "\n";
		t--;
	}
}