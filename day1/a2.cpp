#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    vector<int> l1;
    unordered_map<int, int> mp;
    int a, b;
    while(cin>>a>>b){
        l1.push_back(a);
        mp[b]++;
    }
    long long ans = 0;
    int n = l1.size();
    for(int i = 0; i < n; i++) {
        ans += l1[i] * mp[l1[i]];
    }
    cout<<ans<<"\n";
    fclose(stdin);
    fclose(stdout);
}