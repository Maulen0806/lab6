#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> nums;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    map <int, int> freq;
    for(int num : nums){
        freq[num]++;
    }
    int mostFreq = nums[0];
    int maxCount = freq[mostFreq];
    for(auto pair : freq){
        if(pair.second > maxCount){
            mostFreq = pair.first;
            maxCount = pair.second;
        }
    }
    int minVal = *min_element(nums.begin(), nums.end());
    int maxVal = *max_element(nums.begin(), nums.end());
    cout << "Count of " << mostFreq << ": " << maxCount << endl;
    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal;
}