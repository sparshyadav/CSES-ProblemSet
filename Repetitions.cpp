#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;

    int count=1;
    int maxCount=0;

    for(int i=0; i<str.length(); i++){
        if(str[i+1]!=str[i]){
            maxCount=max(count, maxCount);
            count=1;
        }
        else{
            count++;
        }
    }

    cout<<maxCount;

    return 0;
}