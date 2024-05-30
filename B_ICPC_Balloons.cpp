#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt[26] = {0};
    int len = s.length();
    for(int i=0; i<len; i++){
        int value = s[i] -'A';
        cnt[value]++;

    }
    int sum = 0;
    for(int i=0; i<26; i++){
        if(cnt[i] > 0){
            cout << char(i+'A') << " " << cnt[i] <<endl;
    }
    cout << "Acending order to print a to z: " << endl;
    cout << sum<<endl;
    return 0;
    }
}