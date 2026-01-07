#include<iostream>
using namespace std;

int main(){
    int count1 = 0;
    int count2 = 0;
    int N = 5;
    int arr[N] = {64, 34, 25, 12, 22};
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<N;i++){
        if(arr[i]<mini){
            mini = arr[i];
            count1++;
        }
        
    }
    for(int i=0;i<N;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
            count2++;
        }
        
    }
    cout<<"Smallest element is: "<<mini<<endl;
    cout<<"index number of smallest element is: "<<count1-1<<endl;
    cout<<"Largest element is: "<<maxi;
    cout<<"\nindex number of largest element is: "<<count2-1<<endl;
}