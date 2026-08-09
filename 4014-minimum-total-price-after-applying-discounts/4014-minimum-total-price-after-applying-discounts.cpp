class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n=discounts.size();
        int j=0;
        int p=prices.size();
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        vector<double>res;
        double fin=0;
        for(int i=0;i<min(n,p);i++){
            double temp=(double)prices[i]*(100-discounts[i])/100;
            // cout<<temp<<endl;
            fin+=temp;
            j++;
        }
        for(int k=j;k<p;k++){
            fin+=prices[k];
        }
        return fin;

    }
};