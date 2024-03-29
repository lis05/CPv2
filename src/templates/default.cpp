// CPv2 system for competitive programming
// created by lis05
#ifndef CPv2_LOCAL
    #pragma GCC optimize("O3,inline")
    #pragma GCC target("avx,avx2,bmi,bmi2,abm,popcnt")
#endif

#include"bits/stdc++.h"
using namespace std;

#ifdef CPv2_LOCAL
    #pragma GCC optimize("O3,inline")
    #pragma GCC target("avx,avx2,bmi,bmi2,abm,popcnt")
#endif

typedef int64_t ll;
typedef long double ld;

mt19937 rand32(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 rand64(chrono::steady_clock::now().time_since_epoch().count());

#define all(x) begin(x),end(x)
#define UNIQUE(x) {sort(all(x));x.erase(unique(all(x)),end(x));}
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
//#define rand rng

int onLocal(){
    #ifdef CPv2_LOCAL
        return 1;
    #endif
    return 0;
}
int applyFastIO(){
    if(!onLocal())return 1;
    #ifdef FAST_IO
        return 1;
    #endif
    return 0;
}
int redirectIO(){
    if(!onLocal())return 0;
    #ifdef REDIRECT_IO
        return 1;
    #endif
    return 0;
}
int localMode(){
    if(!onLocal())return 0;
    #ifdef LOCAL_MODE
        return 1;
    #endif
    return 0;
}

namespace BetterIO{
struct Reader{
    template<typename T>
    void operator()(T&obj){
        cin>>obj;
    }
    template<typename T,size_t sz>
    void operator()(array<T,sz>&obj){
        for(auto&e:obj)operator()(e);
    }
    template<typename U,typename V>
    void operator()(pair<U,V>&obj){
        operator()(obj.first);
        operator()(obj.second);
    }
    template<typename T>
    void operator()(vector<T>&obj){
        if(obj.empty()){
            cout<<"BetterIO error: reading an empty vector\n";
            exit(1);
        }
        for(auto&e:obj)operator()(e);
    }
    template<typename T,typename... Args>
    void operator()(T&obj,Args&...args){
        operator()(obj);
        operator()(args...);
    }
};
Reader rd;
struct WriterRaw{
    void __print_data(const int16_t x){cout<<x;}
    void __print_data(const uint16_t x){cout<<x;}
    void __print_data(const int32_t x){cout<<x;}
    void __print_data(const uint32_t x){cout<<x;}
    void __print_data(const int64_t x){cout<<x;}
    void __print_data(const uint64_t x){cout<<x;}
    void __print_data(const float x){cout<<x;}
    void __print_data(const double x){cout<<x;}
    void __print_data(const long double x){cout<<x;}
    void __print_data(const bool x){cout<<(int32_t)x;}
    void __print_data(const char x){cout<<x;}
    void __print_data(const unsigned char x){cout<<x;}
    void __print_data(const string x){cout<<x;}
    void __print_data(const char* x){cout<<x;}

    template<typename T,typename U>
    void __print_data(const pair<T,U> x){__print_data(x.first);__print_data(x.second);}
    template<typename T,size_t sz>
    void __print_data(const array<T,sz> x){for(auto e:x)__print_data(e);}
    template<typename T>
    void __print_data(const vector<T> x){for(auto e:x)__print_data(e);}
    template<typename T>
    void __print_data(const set<T> x){for(auto e:x)__print_data(e);}
    template<typename T>
    void __print_data(const multiset<T> x){for(auto e:x)__print_data(e);}
    template<typename T>
    void __print_data(const deque<T> x){for(auto e:x)__print_data(e);}

    template<typename T>
    void operator()(const T x){__print_data(x);}
    template<typename T,typename...U>
    void operator()(const T x,const U...o){__print_data(x);operator()(o...);}

    void set_precision(int x){cout.precision(x);}
    void set_fixed(){cout<<fixed;}
    void flush(){cout.flush();}
    
};
WriterRaw wrr;

struct WriterSpace{
    void __print_data(){cout<<" ";}
    void __print_data(const int16_t x){cout<<x;__print_data();}
    void __print_data(const uint16_t x){cout<<x;__print_data();}
    void __print_data(const int32_t x){cout<<x;__print_data();}
    void __print_data(const uint32_t x){cout<<x;__print_data();}
    void __print_data(const int64_t x){cout<<x;__print_data();}
    void __print_data(const uint64_t x){cout<<x;__print_data();}
    void __print_data(const float x){cout<<x;__print_data();}
    void __print_data(const double x){cout<<x;__print_data();}
    void __print_data(const long double x){cout<<x;__print_data();}
    void __print_data(const bool x){cout<<(int32_t)x;__print_data();}
    void __print_data(const char x){cout<<x;__print_data();}
    void __print_data(const unsigned char x){cout<<x;__print_data();}
    void __print_data(const string x){cout<<x;__print_data();}
    void __print_data(const char* x){cout<<x;__print_data();}

    template<typename T,typename U>
    void __print_data(const pair<T,U> x){__print_data(x.first);__print_data(x.second);}
    template<typename T,size_t sz>
    void __print_data(const array<T,sz> x){for(auto e:x)__print_data(e);}
    template<typename T>
    void __print_data(const vector<T> x){for(auto e:x)__print_data(e);}
    template<typename T>
    void __print_data(const set<T> x){for(auto e:x)__print_data(e);}
    template<typename T>
    void __print_data(const multiset<T> x){for(auto e:x)__print_data(e);}
    template<typename T>
    void __print_data(const deque<T> x){for(auto e:x)__print_data(e);}

    void operator()(){__print_data();}
    template<typename T>
    void operator()(const T x){__print_data(x);}
    template<typename T,typename...U>
    void operator()(const T x,const U...o){__print_data(x);operator()(o...);}

    void set_precision(int x){cout.precision(x);}
    void set_fixed(){cout<<fixed;}
    void flush(){cout.flush();}
};
WriterSpace wrs;

struct Writer{
    void operator()(){wrr('\n');}
    template<typename T>
    void operator()(const T x){wrs(x);wrr('\n');}
    template<typename T,typename...U>
    void operator()(const T x,const U...o){wrs(x);operator()(o...);}

    void set_precision(int x){cout.precision(x);}
    void set_fixed(){cout<<fixed;}
    void flush(){cout.flush();}
};
Writer wr;

struct WriterFlush{
    void operator()(){wrr('\n');cout.flush();}
    template<typename T>
    void operator()(const T x){wrs(x);wrr('\n');cout.flush();}
    template<typename T,typename...U>
    void operator()(const T x,const U...o){wrs(x);operator()(o...);}

    void set_precision(int x){cout.precision(x);}
    void set_fixed(){cout<<fixed;}
    void flush(){cout.flush();}
};
WriterFlush wrf;

struct WriterTypes{
    void __print_data(){cout<<"\n";}
    void __print_data(const int16_t x){cout<<x<<"s";}
    void __print_data(const uint16_t x){cout<<x<<"su";}
    void __print_data(const int32_t x){cout<<x;}
    void __print_data(const uint32_t x){cout<<x<<"u";}
    void __print_data(const int64_t x){cout<<x<<"L";}
    void __print_data(const uint64_t x){cout<<x<<"LU";}
    void __print_data(const float x){cout<<x<<'f';}
    void __print_data(const double x){cout<<x<<'d';}
    void __print_data(const long double x){cout<<x<<"ld";}
    void __print_data(const bool x){cout<<((x)?"true":"false");}
    void __print_data(const char x){cout<<'\''<<x<<'\'';}
    void __print_data(const unsigned char x){cout<<'\''<<x<<"\'u";}
    void __print_data(const string x){cout<<'"'<<x<<'"';}
    void __print_data(const char* x){cout<<'"'<<x<<'"';}

    template<typename T,typename U>
    void __print_data(const pair<T,U> x)
    {wrr('(');__print_data(x.first);wrr(", ");__print_data(x.second);wrr(')');}
    template<typename T,size_t sz>
    void __print_data(const array<T,sz> x){
        wrr('{');if((int)sz!=0)__print_data(x[0]);
        for(int i=1;i<(int)sz;i++)wrr(", "),__print_data(x[i]);
        wrr('}');
    }
    template<typename T>
    void __print_data(const vector<T> x){
        int sz=(int)x.size();
        wrr('{');if((int)sz!=0)__print_data(x[0]);
        for(int i=1;i<(int)sz;i++)wrr(", "),__print_data(x[i]);
        wrr('}');
    }
    template<typename T>
    void __print_data(const set<T> x){__print_data(vector<T>(all(x)));}
    template<typename T>
    void __print_data(const multiset<T> x){__print_data(vector<T>(all(x)));}
    template<typename T>
    void __print_data(const deque<T> x){__print_data(vector<T>(all(x)));}

    void operator()(){__print_data();}
    template<typename T>
    void operator()(const T x){__print_data(x);__print_data();}
    template<typename T,typename...U>
    void operator()(const T x,const U...o)
    {__print_data(x);wrr(' ');operator()(o...);}

    void set_precision(int x){cout.precision(x);}
    void set_fixed(){cout<<fixed;}
    void flush(){cout.flush();}
};
WriterTypes wrt;


void init(int precision,string input_file,
    string output_file,bool force_redirection=false){
    if(applyFastIO()){
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    if((force_redirection||redirectIO())&&input_file.size()>0){
        if(freopen(input_file.c_str(),"r",stdin)){};
    }
    if((force_redirection||redirectIO())&&output_file.size()>0){
        if(freopen(output_file.c_str(),"w",stdout)){};
    }
    wr.set_precision(precision);
}

template<typename NAME,typename VAL>
void __name_val(NAME name, VAL val){
    wrr(name,"=");wrt(val);
}
template<typename NAME,typename VAL,typename...OTHER>
void __name_val(NAME name, VAL val,OTHER...o){
    wrr(name,"=");wrt.__print_data(val);wrr(" ");
    __name_val(o...);
}


template<typename IT>
void read(IT b,const IT e){
    while(b!=e)rd(*b),b=next(b);
}
template<typename IT>
void print(IT b,const IT e){
    while(b!=e)wrs(*b),b=next(b);
    wr();
}

};

using BetterIO::rd;
using BetterIO::wr;
using BetterIO::wrr;
using BetterIO::wrs;
using BetterIO::wrt;
using BetterIO::wrf;

using BetterIO::print;
using BetterIO::read;

#define __name1(a) \
BetterIO::__name_val(#a,a);
#define __name2(a,b) \
BetterIO::__name_val(#a,a,#b,b);
#define __name3(a,b,c) \
BetterIO::__name_val(#a,a,#b,b,#c,c);
#define __name4(a,b,c,d) \
BetterIO::__name_val(#a,a,#b,b,#c,c,#d,d);
#define __name5(a,b,c,d,e) \
BetterIO::__name_val(#a,a,#b,b,#c,c,#d,d,#e,e);
#define __name6(a,b,c,d,e,f) \
BetterIO::__name_val(#a,a,#b,b,#c,c,#d,d,#e,e,#f,f);
#define __name7(a,b,c,d,e,f,g) \
BetterIO::__name_val(#a,a,#b,b,#c,c,#d,d,#e,e,#f,f,#g,g);
#define __name8(a,b,c,d,e,f,g,h) \
BetterIO::__name_val(#a,a,#b,b,#c,c,#d,d,#e,e,#f,f,#g,g,#h,h);
#define __name9(a,b,c,d,e,f,g,h,i) \
BetterIO::__name_val(#a,a,#b,b,#c,c,#d,d,#e,e,#f,f,#g,g,#h,h,#i,i);
#define __name10(a,b,c,d,e,f,g,h,i,j) \
BetterIO::__name_val(#a,a,#b,b,#c,c,#d,d,#e,e,#f,f,#g,g,#h,h,#i,i,#j,j);
#define GET_MACRO(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,NAME,...) NAME

#define wrn(...) \
{GET_MACRO(__VA_ARGS__,__name10,__name9,__name8,\
__name7,__name6,__name5,__name4,__name3,\
__name2,__name1)(__VA_ARGS__);};

#ifdef ENABLE_DEBUGGER
    #define debug if(onLocal())
#else
    #define debug if(0)
#endif


// #libs:libs

#define PRECISION 25
#define MULTITESTS 0

void solve(int testCase){

}
void precalc(){

}

signed main(){
    BetterIO::init(
        PRECISION,                                  // precision 
        //"connect.in",         // input file
        //"connect.out",true         // output file, force redirection
        "files/input.txt",         // input file
        "files/output.txt"         // output file
    );
    
    if(onLocal()){
        time_t end_time=
        chrono::system_clock::to_time_t(chrono::system_clock::now());
    
        wrr("Ran on ",std::ctime(&end_time));
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
        if(localMode()){
            wr.set_precision(2);
            wr.set_fixed();
            wrr("(",i,")------------",delta,"s\n");
            wr.set_precision(PRECISION);
        }
    }
}

