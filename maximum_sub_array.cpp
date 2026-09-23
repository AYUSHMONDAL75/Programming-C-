// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int arr[5] = {1,2,3,4,5};
//     int maxsum = INT8_MIN;
//     for(int st=0; st<n; st++){
//         int currsum = 0;
//         for(int end=st; end<n; end++){
//             currsum += arr[end];
//             maxsum=max(currsum,maxsum);
//         }
//     }
//     cout << maxsum << endl;
//     return 0;
// }

//kadance's algorithm
#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int maxsum = INT8_MIN;
    for(int i=0; i<n; i++){
        int currsum = 0;
        currsum += arr[i];
        maxsum = max(currsum,maxsum);
        if(currsum < 0){
            currsum = 0;
        }   
    }
    cout << maxsum << endl;
    return 0;
}
