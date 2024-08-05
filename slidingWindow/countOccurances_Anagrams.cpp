#include <bits/stdc++.h>
using namespace std;

bool isAnagram(int count[]){
    for (int i = 0; i < 256; i++){
        if(count[i] != 0) return false;
    }
    return true;
}

int getAnagramCount(string &str, string &pattern, int count[]){
    int totalCount = 0;
    int k = pattern.size();
    int i = 0;
    int j = 0;

    while(j < str.size()){
        count[str[j] - 'a']--;

        if((j - i + 1) < k){
            j++;
        } else if((j - i + 1) == k){
            if(isAnagram(count)){
                totalCount++;
            }

            count[str[i] - 'a']++;
            i++;
            j++;
        }
    }

    return totalCount;
}

int main(){
    string str;
    cout << "Enter the str: ";
    cin >> str;

    string pattern;
    cout << "Enter the pattern: ";
    cin >> pattern;

    int count[256] = {0};

    for(int i = 0; i < pattern.size(); i++){
        count[pattern[i] - 'a']++;
    }

    cout << getAnagramCount(str, pattern, count) << endl;

    return 0;
}
