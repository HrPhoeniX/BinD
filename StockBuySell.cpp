        vector<int> buy(k,INT_MAX); // only k time you buy
        vector<int> sell(k,INT_MIN); // 1,2,..,k time
        for(int i=0;i<prices.size();i++)
        {
            for(int j=0;j<k;j++)
            {
                if(j==0)
                {
                    buy[j] = min(buy[j],prices[i]);
                    sell[j] = max(sell[j],prices[i]-buy[j]);
                }
                else
                {
                    buy[j] = min(buy[j],prices[i]-sell[j-1]);
                    sell[j] = max(sell[j],prices[i]-buy[j]);
                }
            }
        }
        return sell[k-1];
