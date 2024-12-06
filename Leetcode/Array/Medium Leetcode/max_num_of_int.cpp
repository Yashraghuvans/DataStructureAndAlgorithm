class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int size=banned.size();
        int cnt=0;
        vector<int>temp;
        for(int i=1;i<=n;i++){
            temp.push_back(i);
        }
        int m=temp.size();
        vector<int>ans;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=size;j++){
                if(temp[i]!=banned[j]){
                    ans.push_back(temp[i]);
                    cnt++;
                }
            }
        }
        int p=ans.size();
        int sum=0;
        for(int i=1;i<=p;i++){
            sum+=ans[i];
        }
        if(sum==maxSum){
            return cnt;
        }
        return 0;

    }
};