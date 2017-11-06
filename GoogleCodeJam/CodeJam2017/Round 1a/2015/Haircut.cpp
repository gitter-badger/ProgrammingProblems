//template Asprazz 
#define DEBUG 1

#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <sstream>
using namespace std;

#define LL long long
#define LD long double
#define PR pair<int,int>

#define Fox(i,n) for (i=0; i<n; i++)
#define Fox1(i,n) for (i=1; i<=n; i++)
#define FoxI(i,a,b) for (i=a; i<=b; i++)
#define FoxR(i,n) for (i=(n)-1; i>=0; i--)
#define FoxR1(i,n) for (i=n; i>0; i--)
#define FoxRI(i,a,b) for (i=b; i>=a; i--)
#define Foxen(i,s) for (i=s.begin(); i!=s.end(); i++)
#define Min(a,b) a=min(a,b)
#define Max(a,b) a=max(a,b)
#define Sz(s) int((s).size())
#define All(s) (s).begin(),(s).end()
#define Fill(s,v) memset(s,v,sizeof(s))
#define pb push_back
#define mp make_pair
#define x first
#define y second

template<typename T> T Abs(T x) { return(x<0 ? -x : x); }
template<typename T> T Sqr(T x) { return(x*x); }
string plural(string s) { return(Sz(s) && s[Sz(s)-1]=='x' ? s+"en" : s+"s"); }

const int INF = (int)1e9;
const LD EPS = 1e-9;
const LD PI = acos(-1.0);

#if DEBUG
#define GETCHAR getchar
#else
#define GETCHAR getchar_unlocked
#endif

//End Asprazz Template

int main() {
	int t;
	int b,n,i;
	int j;
	int min;int c=1;
	cin>>t;

	while(t--) {
		cin>>b>>n;
		int no_b[b],no_b_backup[b];
		int j=1;
		Fox1(i,b) {
			cin>>no_b[i];
			no_b_backup[i]=no_b[i];
			//cout<<" *"<<no_b[i]<<endl;
		}
		cout<<"Case #"<<c++<<": ";
		while(1){
			min=no_b[1];
			Fox1(i,b) 
				if(min>no_b[i])
					min=no_b[i];
			Fox1(i,b) {
				no_b[i]-=min;
				if(no_b[i]==0) {
					no_b[i]=no_b_backup[i];
					j++;
				}
				if(j>n) {
					cout<<i<<endl;
					break;
				}

			}	
			if(j>n) 
				break;
		}
	}
}

	