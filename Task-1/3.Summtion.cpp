#include <bits/stdc++.h>
#define ll long long
#define itn int
#define ni int n;cin>>n; //input n
#define nmi int n,m;cin>>n>>m; //input n,m
#define forn for(int i=0;i<n;i++) //1D Array 
#define forn1 for(int i=1;i<=n;i++) //for n start 1
#define si string s;cin>>s; //input string s
#define gsi string s;getline(cin,s); //input getline string
#define forsi for(int i=0;i<s.size();i++) //string
#define for2n for(int i=0;i<n;i++)for(int j=0;j<n;j++) //2D array n*n  or searching
#define fornm for(int i=0;i<n;i++)for(int j=0;j<m;j++) //2D array n*m
#define ina int a[n];for(int i=0;i<n;i++){cin>>a[i];} //input 1D array 
#define outa for(int i=0;i<n;i++)cout<<a[i]<<" "; cout<<endl;//output 1D array //input 2D
#define in2da int a[n][m];for(int i=0;i<n;i++){for(int j=0;j<m;j++)cin>>a[i][j];} //output 2D
#define out2da for(int i=0;i<n;i++){for(int j=0;j<m;j++)cout<<a[i][j]<<" ";cout<<endl;} //output 2D
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define tt int t=0;cin>>t; while(t--) //test cases
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define endl "\n"
int n;
int sum1(int nums[]);
int sum2(int nums[]);
int sum3(int nums[]);
using namespace std;
int main()
{
  IO
  /*
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #else
  #endif
  */
/*
proplem 3
*/
  cin>>n;
  ina //input array a
  cout<<sum1(a)<<endl;
  cout<<sum2(a)<<endl;
  cout<<sum3(a)<<endl;
  return 0;
}
int sum1(int nums[]){
  ll sum=0;
  forn{
    sum+=nums[i];
  }
  return sum;
}
int sum2(int nums[]){
  ll sum=0;
  int c=n;
  while(c--){
    sum+=nums[c];
  }
  return sum;
}
int sum3(int nums[]){
  if(n==0)return 0;
  return nums[--n]+sum3(nums);
}
