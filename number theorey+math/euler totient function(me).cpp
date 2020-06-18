///***Bismillahir Rahmanir Rahim***///
///*********************************///
///******Ashraful Haque Toni********///
///********Dept. of CSE,JnU*********///
///email:ashrafulhaquetoni@gmail.com///
///*******contact:01640690531*******///
///*********************************///


#include<bits/stdc++.h>

using namespace std;

#define         ash               ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define         pb                push_back
#define         mp                make_pair
#define         I1(n)             cin>>n;
#define         I2(m,n)           cin>>m>>n;
#define         I3(m,n,o)         cin>>m>>n>>o;
#define         sc(n)             scanf("%d",&n);
#define         scl(n)            scanf("%I64d",&n);
#define         sc2(m,n)          scanf("%d%d",&m,&n);
#define         sc2l(m,n)         scanf("%I64d%I64d",&m,&n);
#define         pf                printf
#define         f(i,n)            for(ll i=0;i<(n);i++)
#define         f1(i,n)           for(ll i=1;i<=(n);i++)
#define         ar_input(a,n)     f(i,n)cin>>a[i];
#define         ve_input(v,n)     f(i,n){ll m;cin>>m,v.pb(m);}
#define         Max               INT_MAX
#define         Min               INT_MIN
#define         pi                acos(-1.0)
#define         Mem(a,val)        memset(a,val,sizeof(a));
#define         asort(a,n)        sort(a,a+n)
#define         vsort(v)          sort(v.begin(),v.end())
#define         fr(i,s,e)         for(ll i=s;i<=e;i++)
#define         ff                first
#define         ss                second
#define         vec               vector<ll>
#define         pai               pair<ll,ll>
#define         Map               map<ll,ll>
#define         mod               1000000007
#define         ll                long long


                         ///template function///

/// ll GCD(ll a,ll b){if(a<0) a*=-1;if(b<0) b*=-1;if(a<b)swap(a,b);if(b==1) return 1;if(!b) return a;if(!(a%b)) return b;else return GCD(b,a%b);}
/// ll LCM(ll a,ll b){ll x=GCD(a,b);return (a/x)*b;}
/// ll bigmod(ll n,ll p){if(p==0) return 1;if(p==1)return (n+mod)%mod;if(p%2)return (bigmod(n,p-1)*n+mod)%mod;else{ll x=bigmod(n,p/2);return (x*x+mod)%mod;}}
/// ll modinverse(ll n){return bigmod(n,mod-2)%mod;}
/// vec de;void devisors(ll n){ll i;for(i=1;i<=sqrt(n);i++){if(!(n%i) && i!=sqrt(n)){de.pb(i);de.pb(n%i);}}if((i-1)*(i-1)==n) de.pb(i-1);vsort(v);}


///*********************************************start***********************************************///

int phi[1000005],mark[1000005];

void seivephi(int n)
{
    fr(i,2,n)phi[i]=i;
    fr(i,2,n)
    {
        if(!mark[i])
        {
            for(int j=i;j<=n;j+=i){
                mark[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}


int main()
{

    ash;
    ll n;
    I1(n);

    seivephi(n);


    f1(i,n)
    {
        cout<<i<<" co-prime-->"<<phi[i]<<endl;
    }




    return 0;
}

///**********************************************end*************************************************///
