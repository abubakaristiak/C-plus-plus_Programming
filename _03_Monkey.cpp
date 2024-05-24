// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string ar;
//     while(getline(cin,ar)){
//         int len = ar.length();
//         for(int i=0; i<len-1; i++){
//             for(int j=i+1; j<len; j++){
//                 if(ar[i] > ar[j]){
//                     char temp = ar[i];
//                     ar[i] = ar[j];
//                     ar[j] = temp;
//                 }
//             }
//         }
//         for(int i=0; i<len; i++){
//             if(ar[i] != ' '){
//                 cout << ar[i];
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ar;
    while(getline(cin,ar))
    {
        int len = ar.length();
        int cnt[26] = {0};

        for(int i=0; i<len; i++){
            if(ar[i] != ' '){
                int value = ar[i] - 'a';
                cnt[value]++;
            }
        }

        for(int i=0; i<26; i++){
            for(int j=0; j<cnt[i]; j++){
                cout << (char) (i+'a');
            }
        }
        cout<<endl;
    }
    return 0;
}