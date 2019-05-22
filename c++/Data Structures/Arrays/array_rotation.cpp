#include <bits/stdc++.h>

using namespace std;

// function to get gcd of a and b
int gcd(int a, int b){
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

// function to left rotate array by d
// juggling algorithm
// Time complexity O(n), space O(1)
void leftRotate(int arr[], int d, int n){
	int g_c_d = gcd(d,n);
	for(int i=0; i< g_c_d; i++){
		int temp = arr[i];
		int j = i;
		while(1){
			int k = j + d;
			if(k >= n)
				k = k - n;
			if(k == i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
}

void printArray(int arr[], int size){
	for(int i = 0; i< size; i++){
		cout << arr[i] << " ";
	}
}

int main() {
	int n, d;
	cin >> n >> d ;
	int arr[n];
	for(int i =0 ;i < n ;i++){
		cin >> arr[i];
	}

	leftRotate(arr,d,n);
	printArray(arr, n);

}