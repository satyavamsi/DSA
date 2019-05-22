#include <bits/stdc++.h>

using namespace std;

// code chef link: https://www.codechef.com/problems/LECANDY

int main(){

	int t, n , c;

	cin >> t;

	while(t != 0){
		cin >> n >> c;
		// array storing number of candies for n elephants
		int arr[n];
		int total = 0;
		for(int i=0; i<n ; i++){
			cin >> arr[i];
			total += arr[i];
		}
		if(total <= c){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
		t--;		
	}
}