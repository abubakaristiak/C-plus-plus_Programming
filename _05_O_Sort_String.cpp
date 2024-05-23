#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c[n];
    cin >> c;
    int cnt[n] = {0};
    for(int i=0; i<strlen(c); i++){
        int value = c[i] - 'a';
        cnt[value]++;
        // printf("%d ",value);
    }
    
    
    return 0;
}