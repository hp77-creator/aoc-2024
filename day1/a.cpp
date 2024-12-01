#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> l1, l2;
    int a, b;
    long long sum = 0;
    while(cin>>a>>b){
        l1.push_back(a);
        l2.push_back(b);
    }
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    int n = l1.size();
    for(int i = 0; i < n; i++) {
        sum += (abs(l1[i] - l2[i]));
    }
    cout<<sum<<"\n";
    fclose(stdin);
    fclose(stdout);
}