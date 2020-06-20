#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
#define ma map<int,int> 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l;
    cin>>k;
    ll c1=0,c2=0,c3=0,c4=0;
    vec v;
    for(i=0;i<k;i++)
    {
        cin>>l;
        if(l==1)c1++;
        if(l==2)c2++;
        if(l==3)c3++;
        if(l==4)c4++;
    }
    int s=0;
    s+=c4;
    if(c1!=0 && c3!=0)
    {
        c1=c1-c3;
        if(c1<0)
            c1=0;
    }
    s+=c3;
    if(c1==0 && c2!=0)
    {
        if(c2==1)
        {
            s++;
            c2=0;
        }
        else if(c2&1)
        {
            s+=c2/2;
            s++;
        }
        else
        s+=(c2/2);
    }
    if(c2!=0 && c1!=0)
    {
        if(c1-2*c2<=0)
        {
            s++;
            c1=0;
        }
        else if(c2==1)
        {
            s++;
        }
        s+=c2/2;
    }
    if(c1!=0)
    {
        c1=c1-2*c2; 
        c1=c1/4;
        if(c1==0)
        {
            s++;
        }
    }
    s+=c1;
    cout<<s;
}
// cnt += v[4];
//     //cout<<4<<" "<<cnt<<endl;
//     cnt += v[3];
//     //cout<<3<<" "<<cnt<<endl;
//     v[1] = max(0,v[1]-v[3]);
//     cnt += v[2]/2;
//     //cout<<2<<" "<<cnt<<endl;
//     v[2] = v[2]%2;
//     cnt += v[2];
//     //cout<<2<<" "<<cnt<<endl;
//     v[1] = max(0,v[1]-2*v[2]);
//     if(v[1]==0){}
//     else if(v[1]<=4){
//         cnt += 1;
//     }else{
//         cnt += v[1]/4;
//         cnt += min(1,v[1]%4);
//     }
//     cout<<cnt<<endl;
