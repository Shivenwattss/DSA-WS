#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int n;
    cout<<"enter the number of elements in an array ";
    cin>>n;
    cout << "Enter the array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(arr[i]==arr[j]){
                for(int k=0;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }else{j++;}
        }
     }

     cout<<"the new arr is ";
     for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

