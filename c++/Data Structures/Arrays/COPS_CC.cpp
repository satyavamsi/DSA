#include <bits/stdc++.h>

using namespace std;

//link to the codechef problem: https://www.codechef.com/problems/COPS
int main() {
	int t;
	cin >> t;
	while(t > 0){
		int arr[100] = {0};
		int M, x, y;
		cin >> M >> x >> y;
		for(int i=0; i<M; i++){
			int h;
			cin >> h;
			h = h - 1; 
			int low = h - x*y;
			if(low < 0){
				low = 0;
			} 
			int high = h + x*y;
			if(high > 100){
				high = 99;
			}
			for(int j=low; j <= high ;j++ ){
				arr[j] = 1;
			}
		}
		int count = 0;
		for(int i = 0; i < 100; i++){
			if(arr[i] == 0){
				count++;
			}
		}
		cout << count << "\n";
		t--;
	}
}