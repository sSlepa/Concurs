#include <fstream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>
#include <bitset>
#include <stack>
#include <unordered_map>
#include <map>
#include <cmath>
#include <chrono>
#include <set>
#include <iomanip>

using namespace std;
#define Inf 0x3f3f3f3f
#define MAX 2000000000000000000LL
#define MOD 1000000009
#define MODC 984162944621615797
#define lsb(i) (i & -i)
#define pii pair<int,int>
#define tup tuple<int,int,int>
#define ll long long
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
///__builtin_popcount(x)

ifstream cin("date.in");
ofstream cout("date.out");

int main(){

    fastio

    long long x,y;
    do{
        cin >> x >> y;

        if(x == 0 && y == 0)
            exit(0);

        int t = 0;
        int tant = 0;
        while(x != 0 && y != 0){
            int suma = x % 10 + y % 10 + tant;
            if(suma > 9)
                t++;
            tant = suma / 10;
            x/=10;
            y /= 10;

        }
        if(!t)
            cout << "No carry operations.\n";
        else if(t == 1)
            cout << t << " carry operation.\n";
        else
            cout << t << " carry operations.\n";


    }while(true);
    


 
    return 0;
}
