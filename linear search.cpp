#include<bits/stdc++.h>
using namespace std;    
// Linear Search Implementation in C++
/*
int main(){ 
    cout<<"input N: ";
    int N ; cin>>N;
    int arr[N];
    cout<<"input array elements: ";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<"input element to search: ";
    int x; cin>>x;
    for(int i = 0; i<N;i++){
        if(arr[i]==x){
            cout<<"Element found at index "<<i<<endl;
            cout<<arr[i]<<endl;
            break;
        }

    }}
        */
int LinearSearch(int arr[], int N, int x) {
    for(int i = 0; i < N; i++) {
        if(arr[i] == x) {
            return i; // Return the index if element is found
        }
    }
    return -1; // Return -1 if element is not found
}
int main() {
    int N;
    cout << "Input N: ";
    cin >> N;
    
    int arr[N];
    cout << "Input array elements: ";
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int x;
    cout << "Input element to search: ";
    cin >> x;
    
    int result = LinearSearch(arr, N, x);
    if(result != -1) {
        cout << "Element found at index " << result << endl;
        cout << arr[result] << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}