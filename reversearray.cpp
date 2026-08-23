#include <iostream>
 using namespace std;
 int main(){
      int n,i;
cout<<"enter the size of array"<<endl;
     cin >>n;
      int arr[n];
     cout<<"entr the elements of array"<<endl;      
      for(i=0;i<n;i++)
     cin>>arr[i];
     int temp;
    int start=0;
     int end=n-1;
     while(start<end){
         temp=arr[start];
                    arr[start]=arr[end];
          arr[end]=temp;
         start++;
         end--;
    }
     cout<<"reversed array"<<endl;
     for(i=0;i<n;i++){
    cout<<arr[i]<<endl;}
     return 0;
 }
