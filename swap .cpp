#include <iostream>
using namespace std;
int main(){
    int n, pos;
    cout<<"enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"entr array elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter position to edit:";
    cin>>pos;
    cout<<"enter the new value for old position:";
    cin>>arr[pos-1];
    cout<<"\nNew Array is:";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;

}