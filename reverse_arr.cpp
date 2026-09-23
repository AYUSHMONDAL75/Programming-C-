#include<iostream>
using namespace std;
#define max 1000
int arr[max], n;

void reverse(){
    int start = 0, end = n-1;
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "Enter "<< n <<" number of terms: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverse();
    cout << "Reverse arr is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}