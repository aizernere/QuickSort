#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    // Choose the pivot
    int pivot = arr[high];
    
    //make things slow
    char holder;
    cout << "Pivot: " << pivot << endl;
    

    // i is pos 0
    //j starts at first element
    int i = (low - 1);
	cout<<"No i yet"<<endl;
	int j;
    for (j = low; j < high; j++) {
    	cout<<"j is "<<arr[j]<<endl;
        // If current element is smaller than the pivot
        cout << "Continue? ";
    	cin >> holder;
        if (arr[j] < pivot) {
            
            cout<<arr[j]<<" is less than "<<pivot<<endl;
            
            // Increment index of smaller element
            cout<<"Incrementing i"<<endl;
            i++;
            cout<<"i is "<<arr[i]<<endl;
            swap(arr[i], arr[j]);
            cout << "Swapped " << arr[i] << " and " << arr[j] << endl;
            cout << "Array after swapping: ";
            for (int k = low; k <= high; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
            cout << "Continue? ";
            cin >> holder;
        }else{
        	cout<<arr[j]<<" is greater than Pivot: "<<pivot<<" so we pass."<<endl;
		}
	}
	cout<<"j is "<<arr[j]<<" which is the pivot."<<endl;
	cout<<"Incrementing i"<<endl;
    i++;
    cout<<"i is "<<arr[i]<<endl;
    swap(arr[i], arr[high]);
    cout << "Swapped " << arr[i] << " and " << arr[high] << endl;
    cout << "Array after swapping: ";
    for (int k = low; k <= high; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
    cout<<"Pivot is at pos "<<i+1<<endl;
    cout << "Continue? ";
    cin >> holder;
	
    return (i);
}


void quickSort(int arr[], int low, int high) {
    // when low is less than high
    if (low < high) {
        // return pivot position which is pi
        int pi = partition(arr, low, high);

        // smaller element than pivot goes left
        // higher element goes right
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {8,2,4,7,1,3,9,6,5};
    int n = 9;

    // Print the original array
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
