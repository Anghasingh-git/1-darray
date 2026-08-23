# include<iostream>
using namespace std;
int main(){
     int n,i,s;
     cout<<"enter the size of array"<<endl;
     cin>>n;
     int arr[n];
     cout<<"enter elements"<<endl;        
     for(i=0;i<n;i++){
          
cin>>arr[i];
     }

cout<<"enter the element to search"<<endl;
cin>>s;
for(i=0;i<n;i++){
     if(arr[i]==s){
     cout<<"the element found at index= "<<i<<endl; 
     return 0;
     }
}
cout<<"element not found "<<endl;
return 0;

}