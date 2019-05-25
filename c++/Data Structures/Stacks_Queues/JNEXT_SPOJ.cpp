#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		stack<int> s;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		int index = -1;
		for(int i = n-1; i > 0 ; i--){
			if(arr[i] > arr[i - 1]){
				index = i - 1;
				break;
			}
		}
		if(index != -1) {
			int min = index+1;
			for(int i=index+1; i< n ;i++){
				if(arr[i] >= arr[index] && arr[i] <= arr[min] ){
					min = i;
				}
			}

			int temp = arr[index];
			arr[index] = arr[min];
			arr[min] = temp;

			for(int i=index+1; i < n ;	i++ ){
				s.push(arr[i]);
			}

			for(int i = index+1; i < n; i++){
				arr[i] = s.top();
				s.pop();
			}

			for(int i = 0; i< n; i++){
				cout << arr[i];
			}
			cout << "\n";
		}else{
			cout << "-1" << "\n";
		}

		
		t--;
	}
}