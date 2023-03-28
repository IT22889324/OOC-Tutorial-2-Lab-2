#include <iostream>
using namespace std;

int search(int arr[], int key);
int findMax(int arr[]);

int main() {
	
	int arr[10], key, numSearch, max;
	
	for(int i = 0; i< 10; i++){
		cout << "Enter Number " << i+1 << " : ";
		cin >> arr[i];
	}
	
	max = findMax(arr);
	cout << "Max value of the array is : " << max << endl;
	
	
	cout << "Enter the Key : ";
	cin >> key;
	
	numSearch = search(arr, key);
	
	if (numSearch == -1)
	{
		cout << "Not Found";
	}
	else
	{
		cout << "Element is found at index " << numSearch;
	}
	
	return 0;
}

int findMax(int arr[]){
	
	int max = arr[0];
	
	for(int i = 0; i < 10; i++){
		
		if (max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}
int search(int arr[], int key){
	
	for (int i = 0; i < 10; i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;	
}
