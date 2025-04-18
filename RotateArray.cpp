#include <iostream>
#include <vector>
using namespace std;


//aproach 1
void leftshift(vector<int>&arr , int d){
    int cnt  = 1;
    while(cnt<=d){
        int temp = arr[0];
        for(int i = 0 ; i<arr.size()-1 ; i++){
            arr[i] = arr[i+1];
        }
        arr[arr.size()-1] = temp;
        cnt++;

    }

}


//approach 2
//using recursion

void reverse(int arr[] , int s ,int e){
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}


void rotate(int arr[] ,int size ,int d){
    
    reverse(arr , 0 , d-1);
    reverse(arr, d , size-1);
    reverse(arr , 0 , size-1);
}




int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int d = 3;
    //leftshift(arr , d);
    rotate(arr.data(), arr.size(), d); 

    for(int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}