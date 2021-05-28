#include <bits/stdc++.h>
using namespace std;

bool isPali(string s){
    int j = s.length() - 1, i = 0;

    while(i<j){
        if(isalnum(s[i]) == false){
            i++; continue;
        }
        if(isalnum(s[j]) == false){
            j--; continue;
        }
        if(tolower(s[i]) != tolower(s[j])){
            return false;
        }
        else{
            i++;j--;
        }
    }
    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    if(isPali){
        cout<<true;
    }
    else{
        cout<<false;
    }
}