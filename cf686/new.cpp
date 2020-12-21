#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <stack>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <sstream>
#include <iomanip>
using namespace std;


#define int int64_t
#define vi vector<int>
#define vb vector<bool>
#define vbb vector< vector<bool> >
#define all(x) (x).begin(), (x).end()
#define vii vector< vector<int> >
#define rip(dp, n, m) vector< vector<int> > dp(n, vector<int>(m,0))
#define ff first
#define ss second
#define pii pair<int64_t, int64_t>
#define miv map<int, vector<int> >
#define mp make_pair
#define pb push_back
#define prr(x) cout << (#x) <<'	' << (x) << endl
#define pr(x) cout  << (x) << endl
#define f(i,n) for(i=0;i<n;i++)
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x) int x; cin>>x; while(x--)
#define FIO  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int dr8[] = {1,1,0,-1,-1,-1, 0, 1};
int dc8[] = {0,1,1, 1, 0,-1,-1,-1};
int dr4[] = {1,0,0,-1};
int dc4[] = {0,1,-1,0};
int gcd(int a, int b)
{
    if(a%b==0) return b;
    return gcd(b, a%b);
}
void solve();

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int32_t main()
{
    FIO;
    int t=1;
    cin >> t;
for(int i=1;i<=t;i++)
    {
        solve();
    }
}
void solve()
{
    int i, n, j, m, k, l, t;
    cin >> n;
     vector< pair<int,int> > v(n);
     f(i,n) cin >> v[i].ff >> v[i].ss;
    // vector<char> s;
    string s;
    // vi s;
    sort(all(v),sortbysec);
    k=0, j=0;
    i=0;
    bool b=true;
    while(i<n and b)
    {
        if(v[i].ss != j ) 
        {
            s.pb('R');
            k++;
            // prr(i);
        }
        else
        {
            if(v[i].ff < k  ) b=false;
            else
            {
                f(l,v[i].ff-k) s.pb('U');
                j = v[i].ff;
            }
            i++;
            // prr(i);
        }
        // i++;
    }

    if(b)
    {
        cout << "YES\n";
         cout << s << endl;
        // cout << s.size();
        // for(auto it:s) cout << it;
        // cout << endl;
    }

    else cout << "NO\n";
}

0 0 0 0 1