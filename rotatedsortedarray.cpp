#include<iostream>
using namespace std;
int main(){
    int i,n,k;
    cout<<"enter the size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"elements"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter k"<<endl;
    cin>>k;
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k){
            cout << "Found at index: " << mid << endl;
            return 0;
        }
        if(arr[start]<=arr[mid]){
        if(arr[start]<=k && k< arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        }
        else {
                if (arr[mid] <k && k <= arr[end]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
            
    }
    cout << "Not found (-1)" << endl;
    return 0;
}