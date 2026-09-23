#include <iostream>
using namespace std;
int sum = 0;
void someofdigit(int num){
    while (num > 0){
        int lastdig = num % 10;
        num /= 10;
        sum += lastdig;
    }
}
int main(){
    someofdigit(234);
    cout << "Sum = " << sum;
    return 0;
}