#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num = 1;
    for(int i = 1; i <= n; i++){
        num *= i;
    }
    cout << num;
}