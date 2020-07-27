#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
#define ma map<int,int> 
ll gright(ll a[],ll n)
{
    ll m=a[0];
    ll right=0,upd=right;
    for(int i=0;i<n;i++)
    {
        upd=right;
        ll get=log2(a[i] & -a[i]) + 1;
        right=min(right,get);
        if(right!=upd)
        {
            m=a[i];
        }
    }
    return m;
}
ll gleft(ll a[],ll  k)
{
    ll m=a[0];
    ll left=0,upd=left,i;
    for(i=0;i<k;i++)
    {
        upd=left;
        ll n=a[i];
        n |= n >> 1; 
        n |= n >> 2; 
        n |= n >> 4; 
        n |= n >> 8; 
        n |= n >> 16; 
        n = n + 1;
        left=n >> 1;
        if(left!=upd)
        {
            m=a[i];
        }
    }
    return m;
}
void decBinary(int arr[], int n) 
{ 
    int k = log2(n); 
    while (n > 0) { 
        arr[k--] = n % 2; 
        n /= 2; 
    } 
} 
int binaryDec(int arr[], int n) 
{ 
    int ans = 0; 
    for (int i = 0; i < n; i++) 
        ans += arr[i] << (n - i - 1); 
    return ans; 
}   
int concat(int m, int n) 
{ 
    int k = log2(m) + 1; 
    int l = log2(n) + 1; 
    int a[k] = { 0 }, b[l] = { 0 };  
    int c[k + l] = { 0 }; 
    decBinary(a, m); 
    decBinary(b, n); 
    int in = 0; 
    for (int i = 0; i < k; i++) 
        c[in++] = a[i]; 
    for (int i = 0; i < l; i++) 
        c[in++] = b[i];
    return (binaryDec(c, k + l)); 
} 

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll p=*max_element(a,a+n);
        ll q=*min_element(a,a+n);
        ll w=p^q;
        cout<<w;
        // cout<<concat(q,p)-concat(p,q)<<"\n";
    }
}

