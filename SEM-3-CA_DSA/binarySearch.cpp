// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key) {

//     int start = 0;
//     int end = size-1;

//     int mid = start + (end-start)/2;

//     while(start <= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }

//         //go to right wala part
//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         else{ //key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
    
//     return -1;
// }


// int main() { 

//     int even[6] = {2,4,6,6,12,18};
//     int odd[5] = {3, 8, 11, 14, 16};

//     int evenIndex = binarySearch(even, 4, 4);

//     cout << " Index of 6 is " << evenIndex << endl;

   


//     return 0;
// }



////////////////////////////////////////////////////////
/////////////////////////////////////////////////////
#include <iostream>
#include <vector>

using namespace std;

int binary_search_for_duplicate(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int duplicate_index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            duplicate_index = mid;
            right = mid - 1; // Continue searching in the left half for earlier duplicates
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return duplicate_index;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 4, 5, 6, 8, 10}; // Example sorted array with duplicates
    int target = 4;

    int index = binary_search_for_duplicate(arr, target);

    if (index != -1) {
        cout << "Duplicate value found at index: " << index << endl;
    } else {
        cout << "No duplicate value found." << endl;
    }

    return 0;
}
