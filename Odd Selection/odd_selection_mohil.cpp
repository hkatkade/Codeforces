//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
 
using namespace std;
 
int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, x, eve = 0, odd = 0; cin >> n >> x;
        ll a[n];
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] % 2 == 0) eve++;
            else odd++;
        }
        if(odd == 0) {
            cout << "No" << endl;
        }
        else if(odd % 2 == 0 && odd + eve - 1 < x)
            cout << "No" << endl;
        else if(x % 2 == 0 && eve == 0)
            cout << "No" << endl;
        else 
            cout << "Yes" << endl;
    }
    return 0;
}