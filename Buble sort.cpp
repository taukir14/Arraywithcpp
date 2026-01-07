#include<bits/stdc++.h>
using namespace std;
// Bubble Sort Implementation in C++
int main(){
    cout<<"input N: ";
    
int N ; cin>>N;
int arr[N];
cout<<"input array elements: ";
for(int i=0;i<N;i++){
    cin>>arr[i];
}
for(int i=0;i<N-1;i++){
    for(int j=0;j<N-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }

}
for(int i=0;i<N;i++){
    cout<<arr[i]<<" ";}
} 