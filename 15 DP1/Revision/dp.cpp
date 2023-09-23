#include<iostream>
#include<vector>

using namespace std;

int kladder(int n, int k){
    vector<int> dp(n+1,0);
    dp[0]=1;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        for(int j=i-1; j>=0 && j>=i-k; j--){
            dp[i] += dp[j];
        }
    }
    return dp[n];
}

int coinChange(vector<int> coins, int target){
    vector<int> dp(target+1, 0);
    for(int i=1; i<=target; i++){
        int min_coin = INT_MAX-1;
        for(int c : coins){
            if(i-c>=0){
                min_coin = min(min_coin, dp[i-c]);
            }
        }
        dp[i] = min_coin +1;
    }
    return dp[target];
}

int jump1(vector<int> arr){
    vector<int> dp(arr.size(), INT_MAX-1);
    dp[0] = 0;
    for(int i=1; i<arr.size(); i++){
        for(int j=0; j<arr[i-1]; j++){
            dp[i+j] = min(dp[i+j], dp[i-1]+1);
        }
    }
    return dp[arr.size()-1];
}

int max_wine_price(vector<int> arr){
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n,0));
    
    for(int i=0;i<n; i++){
        dp[i][i] = (n)*arr[i];
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"Array ^ ";
    cout<<endl;

    for(int l=n-1;l>0;l--){
		for(int r=1;r<n;r++){
            if(l<r){
                int factor = l-1;
                int left = dp[l-1][r]+arr[r]*factor;
                int down = dp[l][r]+arr[l]*factor;
                cout<<l<<","<<r<<" - left, down: "<<left<<","<<down<<endl;
                dp[l][r] = max(left, down);
            }
            
        }
    }
    for(auto a : dp){
        for(auto k : a){
            cout<<k<<"\t";
        }
        cout<<endl;
    }
    return dp[0][n-1];
}

int frog_min_jump(vector<int> arr){
    int n = arr.size();
    vector<int> dp(n,INT_MAX);
    dp[0] = 0;

    for(int i=0; i<n-1; i++){
        dp[i+1] = min(dp[i+1], dp[i]+abs(arr[i]-arr[i+1]));
        if(i+2<n){
            dp[i+2] = dp[i]+abs(arr[i]-arr[i+2]);
        }
    }
    return dp[n-1];
}

int subsequenceCount(string a, string b){
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            if(i==0){
                dp[i][j] = 1;
            } else if(a[j-1] == b[i-1] && dp[i-1][j-1]==1){
                dp[i][j] = dp[i][j-1] + 1;
            } else if(j!=0){
                dp[i][j] = max(dp[i][j], dp[i][j-1]);
            }
        }
    }
    cout<<endl;
    for(auto i : dp){
        for (auto j:i){
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    // int ans = 0;
    // for(int k : dp[m]){
    //     ans+=k;
    // }
    return dp[m][n];
}

int main(){
    // cout<<kladder(5,3);
    vector<int> coins = {1,3,7,10};
    vector<int> arr = {3,4,2,1,2,3,3,10,1,1,1,2,5};
    vector<int> wine_price = {2,3,5,1,4};
    vector<int> frog_jump = {30,10,60,10,60,50};
    // cout<<"Coins change: "<<coinChange(coins, 15)<<endl;
    // cout<<"Jump1: "<<jump1(arr)<<endl;
    // cout<<"Sell Wines: "<<endl<<max_wine_price(wine_price)<<endl;
    // cout<<"Frog Min cost: "<<frog_min_jump(frog_jump);
    cout<<"Subsequence Count: "<<subsequenceCount("ABCDCE", "ABC");
    return 0;
}