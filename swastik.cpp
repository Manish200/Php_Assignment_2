/*  This code is submitted by
    Manish Kumar Rai
    Hackerrank user ID :  https://www.hackerrank.com/mrai8450?hr_r=1
*/

#include<bits/stdc++.h>
using namespace std;

#define BOOSTIO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
/****** Template of some basic operations *****/
template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
/**********************************************/


#include <bits/stdc++.h>
using namespace std;
void swastika(int row, int col)
{
for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
    if (i < row / 2) {
        if (j < col / 2) {
        if (j == 0)
            cout << "*";
        else
            cout << " " << " ";
        }
        else if (j == col / 2)
        cout << " *";
        else
        {
        if (i == 0)
            cout << " *";
        }
    }
    else if (i == row / 2)
        cout << "* ";
    else {
        if (j == col / 2 || j == col - 1)
        cout << "* ";
        else if (i == row - 1) {
        if (j <= col / 2 || j == col - 1)
            cout << "* ";
        else
            cout << " " << " ";
        }
        else
        cout << " " << " ";
    }
    }
    cout << "\n";
}
}
int main()
{
   int row = 7, col = 7;
   swastika(row, col);
   return 0;
}
