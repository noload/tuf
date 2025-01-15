#include<iostream>
using namespace std;

void pattern1(){
 int n=5;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "*";
        }
        cout << endl;;
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}

void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}


void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout << "_";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout << "*";
        }

        for(int j=0;j<i;j++){
            cout << "_";
        }

        cout << endl;
    }
}
int main(){

    int n;
    cout << "Enter no of rows : ";
    cin >> n;
    // pattern1();
    // pattern2(n);
    // pattern3(n);
    // pattern4(n)
    // pattern5(n);
    // pattern6(n);
    pattern7(n);
}