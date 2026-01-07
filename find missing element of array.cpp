#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cout<<"Enter the size of array: ";
    cin>>N;
    int arr[N-1];
    cout<<"Enter the elements of array (from 1 to N with one missing): ";
    for(int i=0;i<N-1;i++){
        cin>>arr[i];
    }
    int sum = 0;
    int mot=N*(N+1)/2;
    for(int i = 0;i<N-1;i++){
        sum+=arr[i];
    }
    cout<<"Missing element is: "<<(mot-sum)<<endl;
    
}