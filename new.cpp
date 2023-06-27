 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
 
  int32_t n;
  cin>>n;
  vector<int>vec;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    vec.push_back(x);
  }

  vector<int>dp(n,0);
  dp[0]=0;
  dp[1]=abs(vec[1]-vec[0]);
  for(int i=2;i<n;i++)
  {
    dp[i]=abs(vec[i]-vec[i-1])+dp[i-1];
    //cout<<dp[i]<<" ";
    dp[i]=min(dp[i],abs(vec[i]-vec[i-2])+dp[i-2]);
    //cout<<dp[i]<<" ";
  }
   cout<<dp[n-1]<<endl;





 
      return 0;
  }