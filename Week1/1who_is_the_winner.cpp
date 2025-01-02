class Solution {
public:
void removeKelement(queue<int> & q,int k){
    int size=q.size();
    int kk=k;
    while(k!=1){
        int val=q.front();
        q.pop();
        q.push(val);
        k--;
    }
    q.pop();
}

int solve(int n, int k){
    queue<int>q;
      for(int i=1;i<=n;i++) q.push(i);
      while(q.size()!=1){
        int qsize=q.size();
        int kth=(k-1)% qsize +1; //this line Is Important => high time complexity
        removeKelement(q,kth);
      }
    return q.front();
}


int solve2(int n,int k){
    if(n==1) return 0;
    return ( solve2(n-1,k)+ k) % n;
}

int solve2_dp(int n,int k,vector<int>&dp){
    if(n==1) return 0;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=( solve2_dp(n-1,k,dp)+ k) % n;
}

int findTheWinner(int n, int k) {
    // return solve(n,k);

    // note we are adding the 1 because its an 1 based problem
    // return solve2(n,k)+1;
    vector<int>dp(n+1,-1);
    return solve2_dp(n,k,dp)+1;

      

      
}
};