#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void factor(int n){
    vector<int> v;
    for(int i=1;i*i <= n;i++){
        if(n % i == 0){
            v.push_back(i);
            if((n/i) != i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto it: v) cout << it << " "; 

}
int main(){
    factor(36);

    return 0;
}