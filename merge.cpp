#include <iostream>
using namespace std;

//merge 2 sorted arrays
void merge(int arr1[], int n , int arr2[] , int m , int arr3[]){
    int i=0 , j=0 , k = 0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }

    }
    while (i<n){
        arr3[k++] = arr1[i++];
    }
   while(j<m){
    arr3[k++] = arr2[j++];

   }
    
}


int main(){
    int n = 5 , m = 5;

    int arr1[n] = {1, 3, 5, 0, 0};
    int arr2[m] = {2, 4, 6, 8, 10};

    int arr3[10] = {0};
    merge(arr1 , n , arr2 , m , arr3);
    for(int i = 0 ; i< n+m ; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
    
    
}