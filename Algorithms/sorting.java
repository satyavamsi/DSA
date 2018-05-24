import java.util.*;
import java.io.*;

class sorting{

	//Insertion Sort O(n^2)
	void insertionSort(int arr[]){
		int n = arr.length;
		for(int i=1;i<n;i++){
			int key = arr[i];
			int j = i-1;
			
			while(j>=0 && arr[j] > key){
				arr[j+1] = arr[j];
				j = j-1;
			}
			arr[j+1] = key;
		}
	}
	
	
	// Selection Sort O(n^2)
	void selectionSort(int arr[]){
		int n = arr.length;
		for(int i=0;i<n;i++){
			int min_idx = i;
			for(int j=i+1;j<n;j++){
				if(arr[j] < arr[min_idx]){
					min_idx = j;
				}
			}
			
			int temp = arr[min_idx];
			arr[min_idx] = arr[i];
			arr[i] = temp;
		}
	}
	
	// Bubble Sort O(n^2)
	void bubbleSort(int arr[]){
		int n = arr.length;
		for(int i=0;i<n;i++){
			for(int j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}
	
	// Merge Sort O(nlogn)
	void merge(int arr[], int l, int m, int r){
		int n1 = m - l + 1;
		int n2 = r - m;
		
		int L[] = new int[n1];
		int R[] = new int[n2];
		
		for(int i=0;i<n1;i++){
			L[i] = arr[l+i];
		}
		for(int i=0;i<n2;i++){
			R[i] = arr[m+1+i];
		}
		
		int i =0, j =0;
		
		int k = l;
		
		while(i < n1 && j < n2){
			if(L[i] <= R[j]){
				arr[k] = L[i];
				i++;
			}else {
				arr[k] = R[j];
				j++;
			}
			k++;
		}
		
		while(i < n1){
			arr[k] = L[i];
			i++;
			k++;
		}
		while(j < n2){
			arr[k] = R[j];
			j++;
			k++;
		}
	}
	void mergeSort(int arr[], int l, int r){
		if(l < r){
			int m = (l+r)/2 ;
			mergeSort(arr, l, m);
			mergeSort(arr, m+1, r);
			
			// merge the sorted halves
			merge(arr, l, m, r);
		}	
	}
	
	// Quick Sort O(n^2)
	int partition(int arr[], int low, int high){
		int pivot = arr[high];
		int i = low-1;
		for(int j = low; j <high; j++){
			if(arr[j] <= pivot){
				i++;
				
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
		int temp = arr[i+1];
		arr[i+1] = arr[high];
		arr[high] = temp;
		
		return i+1;
	
	}
	void quickSort(int arr[], int low, int high){
		if(low < high){
			int pi = partition(arr, low, high);
			
			quickSort(arr, low, pi - 1);
			quickSort(arr, pi + 1, high);
		}
	}
	
	// Heap Sort O(nlogn)
	void heapify(int arr[], int n, int i){
		int largest = i;
		int l = 2*i + 1;
		int r = 2*i + 2;
		
		if(l<n && arr[l]>arr[largest])
			largest = l;
		
		if(r<n && arr[r] > arr[largest])
			largest = r;
		
		if(largest != i){
			int swap = arr[i];
			arr[i] = arr[largest];
			arr[largest] = swap;
			
			heapify(arr, n, largest);
		} 
	}
	void heapSort(int arr[]){
		int n = arr.length;
		for(int i= n/2 - 1; i >= 0; i--)
			heapify(arr, n, i);
		for(int i=n-1; i >= 0; i--){
			int temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
			
			heapify(arr,i,0);
		}
	}
	
	// Shell Sort O(n^2)
	void shellSort(int arr[]){
		int n = arr.length;
		for(int gap = n/2; gap > 0; gap /= 2){
			for(int i = gap; i<n; i++){
				int temp = arr[i];
				int j;
				for(j = i; j>=gap && arr[j-gap]>temp; j-=gap){
					arr[j] = arr[j-gap];
				}
				
				arr[j] = temp;
			}
		}
	}

	
	
	// print the array
	void printArray(int arr[]){
		int n = arr.length;
		for(int i=0;i<n;i++){
			System.out.print(arr[i] + " ");
		}
		System.out.println();
	}	
	
	public static void main(String[] args){
		
		test ob = new test();
		
		int[] arr = new int[]{64,25,12,22,11};
		ob.printArray(arr);
		ob.insertionSort(arr);
		ob.printArray(arr);
	}
}

