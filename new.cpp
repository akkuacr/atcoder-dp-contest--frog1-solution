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
 vector<vector<int>>vacation;
 for(int i=0;i<n;i++)
 {
    int x;
    vector<int>vec;
    for(int j=0;j<3;j++)
    {
        cin>>x;
        vec.push_back(x);
    }
    vacation.push_back(vec);
 }


 vector<vector<int>>dp(n,vector<int>(3,0));
  dp[0][0]=vacation[0][0];
  dp[0][1]=vacation[0][1];
  dp[0][2]=vacation[0][2];

  for(int i=1;i<n;i++)
  {
    dp[i][1] =max(dp[i-1][2],dp[i-1][0])+vacation[i][1];
    dp[i][0]=max(dp[i-1][1],dp[i-1][2])+vacation[i][0];
    dp[i][2] = max(dp[i-1][1],dp[i-1][0])+vacation[i][2];

  }
   
   cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]))<<endl;




 
      return 0;
  }