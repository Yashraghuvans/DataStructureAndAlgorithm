class Solution {
  public:
    int setBit(int n) {
        int i=0;
        while(i<10)
        {
            if(n == (n&(~(1<<i))))
            {
                n = n|(1<<i);
                return n;
            }
            i++;
        }
        
        return n;
    }
};