#include <iostream>
#include <vector>
using namespace std;

int main(){
    string input;
    cin >> input;
    vector <char> word;
    for(int i = input.size() - 1; i >= 0; i--){
        word.push_back(input[i]);
    }
    for(char c : word){
        cout << c;
    }
    return 0;
}