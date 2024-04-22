/*Will Hooker
* CS221-02
* This program initializes an array of given numbers, prints the original list, then sorts the list in ascending order using selection sort
*/
#include <iostream>

using namespace std;

void selectionSort(int arr[], int n) { //selection sort function
	
	int i, j, min_idx;
	//one by one move boundary of unsorted array
	for (i = 0; i < n - 1; i++) { 
		
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			//finding the minimum element
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		//swapping the minimum element
		int temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;		
	}
}

int main() {
	int arr[] = { 12,3,5,8,11,9,1 }; //initialization and print of original unsorted list
	cout << "Original list: ";
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	selectionSort(arr, 7); //calling the selection sort function

	cout << "Sorted list in ascending order: "; //printing the sorted list
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}