#include<iostream>
using namespace std;
void reverse(int n){
    int reverse = 0;
    while(n != 0){
        int digit = n % 10;
        reverse= reverse * 10 + digit;

        n = n /10;
    }

    cout << "reverse number is " << reverse;
}

int main(){
    reverse(1234);
    return 0;

}