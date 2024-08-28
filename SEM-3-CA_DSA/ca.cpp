// You have recorded the completion times (in minutes) of participants in a marathon. To award medals, you need to sort
//the runner's times from the fastest to the slowest. Write the C++ code that use merge sort  to sort the array of completion
//times. int time[]={240,195,210,180,205}.

#include<iostream>
using namespace std;
void merge(int arr[], int s, int e) {
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    //store kr liyaa new arry me value ko  

    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }
    //merge krna hai yhaa pr 
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int arr[], int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort krdiyaa
    mergeSort(arr, s, mid);
    
    //right wala part  bhi ho gyaaaa
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e); //this is for my both the indexesss that is >> {95, 195,210}  { 180, 205} basss

}

int main() {

    int arr[5] = {240, 195, 210, 180, 205};
    int n = 5;

    mergeSort(arr, 0, n-1);  

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}

