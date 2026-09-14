class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int l=rec1[0];
        int r=rec1[2];
        int u=rec1[3];
        int d=rec1[1];
        int l1=rec2[0];
        int r1=rec2[2];
        int u1=rec2[3];
        int d1=rec2[1];
        // bool f=l1<r&&l1>l||r1<r&&r1>l;
        // bool f1=u1<u&&u1>d||d1<u&&d1>d;
        
        bool x = (l < r1 && l1 < r);
        bool y = (d < u1 && d1 <u);

        return x && y;
        

    }
};