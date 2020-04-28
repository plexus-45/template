#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;

#define ll long long int
#define llu unsigned long long
#define ldo long double 
#define si short int

ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}
string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}

template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//arr_in
template <typename T > 
void cin_a(T arr[],ll n){
  for(ll i=0;i<n;i++) cin>>arr[i];
}
//arr_out
template <typename T> 
void cout_a(T arr[],ll n){
  for(ll i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<'\n';
}
//vector_in
template< typename T >
istream &operator>>(istream &is, vector< T > &v) {
  for(T &in : v) is >> in;   
  return is;
}
//vector_out 
template< typename T >
ostream &operator<<(ostream &os, const vector< T > &v) {
  for(ll i = 0; i < (ll) v.size(); i++) {
    os << v[i] << (i + 1 != v.size() ? " " : "");
  }
  return os;
}
 //set_out
template< typename T >
ostream &operator<<(ostream &os, const set< T > &s) {
  for(auto const&i : s){
      os<<i<<" ";
  }
  os<<'\n';
  return os;
}

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << std::endl;
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif

#define ios         ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb          push_back
#define pob         pop_back
#define eb          emplace_back
#define pf          push_front
#define pof         pop_front
#define mkp         make_pair
#define all(a)      a.begin(),a.end()
#define fi          first
#define se          second    

#define bs(v,x)     binary_search(all(v),x)
#define ub(v,x)     upper_bound(all(v),x)
#define lb(v,x)     lower_bound(all(v),x)
#define mset(m,v)   memset(m,v,sizeof(m))
#define lcm(a,b)    (a*b)/__gcd(a,b)
#define pct(x)      __builtin_popcount(x)
#define bit(x)      (31-__builtin_clz(x))                                                 // floor(log2(x)) 
#define cdiv(a,b)   (a/b+!(a<0||a%b == 0))                                     // division of a by b rounded up, assumes b > 0 

#define mod         (ll)1000000007
#define INF         0x3f3f3f3f
#define INFL        0x3f3f3f3f3f3f3f3fLL
#define MAX         LLONG_MAX 
#define MIN         LLONG_MIN
#define pii         pair<ll,ll> 
#define pdd         pair<double,double>
#define pic         pair<int,char>

//priority_queue <ll> max_pq; 
//priority_queue <ll, vector<ll>, greater<ll> > min_pq; 

const int N=1e5+7;
int main() {
  
  ios;
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
  int tt;
  cin >> tt;
  while(tt--){
     
  } 
  return 0;
}    
