/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>res(m,vector<int>(n,-1));
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=m-1;
        // head=head->next;

        while(left<=right&& top<=bottom){
            //left to right
            for(int i=left;i<=right;i++){
                if(head){
                res[top][i]=head->val;
                head=head->next;}
            }
            top++;
            for(int i=top;i<=bottom;i++){
                if(head){
                res[i][right]=head->val;
                head=head->next;}
            }
            right--;
            if(left<=right){
                for(int i=right;i>=left;i--){
                    if(head){
                    res[bottom][i]=head->val;
                    head=head->next;}
                }
                bottom--;
            }
            if(top<=bottom){
                for(int i=bottom;i>=top;i--){
                    if(head){
                    res[i][left]=head->val;
                    head=head->next;}
                }
                left++;
            }
        }

        return res;
    }
};