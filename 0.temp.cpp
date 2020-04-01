#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long llu;
typedef long double ldo;

#define forz(i,n)  for(ll i=0;i<n;++i)
#define fors(i,s,e) for(ll i=s;i<e;i++)
#define rep(i,s,e) for(ll i=s;i<=e;++i)
#define urep(i,s,e)  for(ll i=s;i>=e;--i)
#if defined(_MSC_VER) || __cplusplus > 199711L
#define aut(r,v) auto r = (v)
#else
#define aut(r,v) __typeof(v) r = (v)
#endif
#define each(it,o) for(aut(it, (o).begin()); it != (o).end(); ++ it)

#define MOD         (ll)1000000007
#define INF         0x3f3f3f3f
#define INFL        0x3f3f3f3f3f3f3f3fLL
#define MAX         LLONG_MAX
#define MIN         LLONG_MIN
#define pp          pair<ll,ll>
#define vi          vector<int>
#define vl          vector<ll>
#define vp          vector<pp>
#define vs          vector<string>

#define ios         ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb          push_back
#define pob         pop_back
#define eb          emplace_back
#define pf          push_front
#define pof         pop_front
#define mkp         make_pair
#define all(a)      a.begin(),a.end()
#define ff          first
#define ss          second

#define bs(v,x)     binary_search(all(v),x)
#define ub(v,x)     upper_bound(all(v),x)
#define lb(v,x)     lower_bound(all(v),x)
#define mset(m,v)   memset(m,v,sizeof(m))
#define lcm(a,b)    (a*b)/__gcd(a,b)
#define pct(x)      __builtin_popcount(x)
#define bit(x)      (31-__builtin_clz(x))                                                 // floor(log2(x)) 
#define cdiv(a,b)   (a/b+!(a<0||a%b == 0))                                     // division of a by b rounded up, assumes b > 0 


template< typename T1, typename T2 >
inline bool setmax(T1 &a, T2 b) { return a < b && (a = b, true); }

template< typename T1, typename T2 >
inline bool setmin(T1 &a, T2 b) { return a > b && (a = b, true); }


//pair in pair out
template< typename T1, typename T2 >
istream &operator>>(istream &is, pair< T1, T2 > &p) {
  is >> p.first >> p.second;
  return is;
}
template< typename T1, typename T2 >
ostream &operator<<(ostream &os, const pair< T1, T2 > &p) {
  os << p.first << " " << p.second;
  return os;
}
 

//arr_in
template <typename T > 
void cin_a(T arr[],ll n){
  forz(i,n) cin>>arr[i];
}

//arr_out
template <typename T> 
void cout_a(T arr[],ll n){
  forz(i,n){cout<<arr[i]<<" ";}cout<<'\n';
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
  for(int i = 0; i < (int) v.size(); i++) {
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


// debug_out
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
