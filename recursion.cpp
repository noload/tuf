#include<iostream>
#include<vector>
using namespace std;
// void  printName(int  n){
//     if(n == 0){
//         return;
//     }
//     cout << "Name:vaibhav" <<endl;
//     printName(n-1);
// }
void  printName(int  n){
    if(n == 0){
        return;
    }
    cout << n <<endl;
    printName(n-1);
}
// void sumN(int n,int sum){
//     if(n == 0){
//         cout << sum;
//         return;
//         }=
//     sum = n + sum;
//     sumN(n-1,sum);
   
// }

int sum1(int n){
    if(n == 0) return 0;
    return n + sum1(n-1);
}
int fact(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
}

bool palindrom(int i, string &s){
    if(i >= (s.size()/2)) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return palindrom(i+1,s);
}
 
 int nthfibonacci(int n){
    if(n<=1) return n;
    return nthfibonacci(n-1) + nthfibonacci(n-2);
 }
int main(){
    // printName(5);
    // cout << "Factorial of " << fact(5) << endl;
    // sumN(5,0);
    // vector<int> rev= reverseArray([1,2,4,5,6],[],5);
    // string s ="madam";
    // cout << palindrom(0,s);
    cout << nthfibonacci(4);
}