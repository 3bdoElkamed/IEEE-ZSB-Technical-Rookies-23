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
#define all(s) s.begin(),s.end()
#define fix(n) cout << fixed << setprecision(n);
#define tt int t=0;cin>>t; while(t--) //test cases
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define endl "\n"
using namespace std;
int main()
{
  IO
  // #ifndef ONLINE_JUDGE
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  // #else
  // #endif
/*
  #5-maximum distance city
*/
  nmi
  // intially all city has number n
  int a[n];
  forn{ 
    a[i]=n;
  }
  // store the stations
  int b[m];
  for(int i=0;i<m;i++)cin>>b[i];

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if (j==b[i])a[j]=0;
      else{
        //the distance between city and station
        int dist=abs(b[i]-j);
        if(a[j]>=dist)a[j]=dist;
      }
    }
  }
  // now to get max distance that has max value in array --> a
  sort(a,a+n);
  //algorithm of sorting
    // for(int i=0;i<n-1;i++){
    //   for(int j=i+1;j<n;j++){
    //     if(a[i] > a[j]){
    //       int temp;
    //       temp=a[i];
    //       a[i]=a[j];
    //       a[j]=temp;
    //     }
    //   }
  cout<<a[n-1]<<endl;
  return 0;
}
