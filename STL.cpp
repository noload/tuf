#include<iostream>
#include<vector>
using namespace std;


void explainPair(){

    
    pair<int,int> p1 ={1,3};

    cout << p1.first << " " << p1.second << endl;

    pair<int,pair<int,int>> p2 ={1,{2,4}};

    cout << p2.first << " " << p2.second.first << " ";

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};

    cout << arr[1].first;
}

void explainVector(){
    //vectir is dynamic in nature we can increase size of vector wheras array is not dynamic

    //methods
    // v.push_back(1) // add eleemt at end
    //v.emplace_back(2)

    std::vector<int> v1={1,2,3,4,5};
    v1.push_back(6);

    //method 1 of traversing
    // vector<int>::iterator it = v1.begin();

    // for(vector<int>::iterator i= it;i!= v1.end();i++){
    //     cout << *(i) << " ";
    // }

    //method 2 of traversing

    // for(auto it=v1.begin();it != v1.end();it++){
    //     cout << *(it) << " ";
    // }

 //method 2 of traversing

    for(auto it :v1){
        cout << it << " ";
    }

    // v1.erase() -- to delete element 



    std::vector<pair<int,int>> v2; // {{1,2},{2,3}}
    // v2.push_back({6,7});
    // v2.emplace_back(2,3);
    // cout << v2[0].first;

    // iterator --> point to the memory location where the corresponding values stored of a a variable

}

int main(){
    // explainPair();
    explainVector();
    return 0;
}