#include<iostream>
#include<map>
#include<string>

using namespace std;


map<char, int> romanMap = {
    {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D', 500}, {'M',1000}};
string str = "III";

int main(){
    int sum = 0;
    for (int i = 0; i < str.size() - 1; i++) {
        if (romanMap[str[i]] >= romanMap[str[i+1]]) {
            sum += romanMap[str[i]];  // Fixed typo here (=+ to +=)
        } else {
            sum -= romanMap[str[i]];
        }
    }
    
    // Always add the very last character safely without checking ahead
    sum += romanMap[str[str.size() - 1]];
    
    cout << "Total: " << sum << endl;
    
    cout << sum << endl;

    return 0;
}