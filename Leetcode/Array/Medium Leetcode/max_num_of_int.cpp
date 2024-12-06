class Solution
{
public:
    int maxCount(vector<int> &banned, int n, int maxSum)
    {
        int size = banned.size();
        int cnt = 0;
        vector<int> temp;
        for (int i = 1; i <= n; i++)
        {
            temp.push_back(i);
        }
        int m = temp.size();
        vector<int> ans;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (temp[i] != banned[j])
                {
                    ans.push_back(temp[i]);
                    cnt++;
                }
            }
        }
        int p = ans.size();
        int sum = 0;
        for (int i = 1; i <= p; i++)
        {
            sum += ans[i];
        }
        if (sum == maxSum)
        {
            return cnt;
        }
        return 0;
    }

    int maxCount(vector<int> &banned, int n, int maxSum)
    {
        unordered_set<int> bannedSet(banned.begin(), banned.end());
        int count = 0, sum = 0;

        for (int num = 1; num <= n; ++num)
        {
            if (bannedSet.count(num) == 0 && sum + num <= maxSum)
            {
                count++;
                sum += num;
            }
        }

        return count;
    }

    int maxCount(vector<int> &banned, int n, int maxSum)
    {
        bitset<10001> xNot = 0;
        for (int x : banned)
            xNot[x] = 1;
        int sum = 0, cnt = 0;
        for (int x = 1; x <= n && sum <= maxSum; x++)
        {
            if (!xNot[x])
            {
                sum += x;
                cnt++;
            }
        }
        return (sum <= maxSum) ? cnt : cnt - 1;
    }
};