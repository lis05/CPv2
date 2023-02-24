// CPv2 system for competitive programming

#include"bits/stdc++.h"
using namespace std;

#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,bmi,bmi2,abm,popcnt")

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define all(x) begin(x),end(x)

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rand rng
// #libs:libs

bool onLocal(){
    #ifdef LIS05ST
        return 1;
    #endif
    return 0;
}

void precalc(){

}

#define MULTITESTS 0
void solve(int testCase){
    
}

const char* INPUT_FILE="/home/lis05st/CPv2/files/input.txt";
const char* OUTPUT_FILE="/home/lis05st/CPv2/files/output.txt";

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    if(onLocal()){
        freopen(INPUT_FILE,"r",stdin);
        freopen(OUTPUT_FILE,"w",stdout);

        time_t end_time=
        chrono::system_clock::to_time_t(chrono::system_clock::now());
    
        cout<<"Ran on "<<std::ctime(&end_time);
        cout<<"==================================\n";
    }

    precalc();
    int t=1;
    if(MULTITESTS)cin>>t;
    for(int i=1;i<=t;i++){
        auto t1=clock();
        solve(i);
        auto t2=clock();
        float delta=t2-t1;
        delta/=CLOCKS_PER_SEC;
        if(onLocal()){
            cout<<"("<<i<<")------------"<<fixed<<setprecision(2)<<delta<<"s\n";
        }
    }
}



