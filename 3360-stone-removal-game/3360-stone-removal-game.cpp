class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)return false;
        if(n==10)return true;
        int r=10;
        int turn=0;
        while(n>=r){
            n=n-r;
            r--;
            turn++;
            cout<<turn<<" "<<n<<r<<endl;
        }
        if(turn%2 && r>=n)return true;
        return false;
    }
};