#include<iostream>
using namespace std;
int main(){
int i,n;
cout<<"size of arr"<<endl;
cin>>n;
int arr[n];
cout<<"enter the elements"<<endl;
for(i=0;i<n;i++){
    cin>>arr[i];
}
int arr2[n];
cout<<"elements of arr2"<<endl;
for(i=0;i<n;i++){
    cin>>arr2[i];
}
int arr3[n];
for(i=0;i<n;i++){
    if(arr[i]==arr2[i]){
        arr3[i]=arr[i];
    }
    if(arr[i]>arr2[i]){
        arr3[i]=arr[i];
    }
    else{
        arr3[i]=arr2[i];
    }
}
for(i=0;i<n;i++){
    cout<<arr3[i]<<" ";
}
cout<<endl;
return 0;
}