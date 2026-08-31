#include<iostream>
using namespace std;
int main(){
    int i,n,temp;
    cout<<"size"<<endl;
    cin>>n;
    int arr[n];
   cout<<"elements"<<endl;
   for(i=0;i<n;i++){
    cin>>arr[i];
   }
   int insertzero=0;
   for(i=0;i<n;i++){
    if(arr[i]!=0){
    temp=arr[i];
    arr[i]=arr[insertzero];
    arr[insertzero]=temp;
    insertzero++;
    }
   }
   for(i=0;i<n;i++){
    cout<<arr[i];
   }
   cout<<endl;
   return 0;
}