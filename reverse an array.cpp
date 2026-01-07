#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    cout << "input N: ";
    int N; cin >> N;
    int arr[N];
    cout << "input array elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    ReverseArray(arr, N);
    cout << "Reversed array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}




/*
int main(){
    cout<<"input N:";
    int N ; cin>>N;
    int arr[N];
    cout<<"input array elements: ";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int arr1[N];
   for(int i=N-1;i>=0;i--){
         arr1[N-1-i]=arr[i];
    //cout<<arr[i]<<" ";

   }
    for(int i=0;i<N;i++){
     cout<<arr1[i]<<" ";
    }
}
*/