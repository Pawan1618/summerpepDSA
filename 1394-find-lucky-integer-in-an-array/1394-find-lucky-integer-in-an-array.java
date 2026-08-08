class Solution {
    public int findLucky(int[] arr) {
        int n=arr.length;
        // int maxi=Collections.max(arr);/
        int maxi=0;
        for(int i:arr){
            maxi=Math.max(i,maxi);
        }
        int [] freq= new int[maxi+1];
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        int res=0;
        int ind=-1;
        for(int i=0;i<n;i++){
            if(freq[arr[i]]==arr[i]){
                res=freq[arr[i]];
                ind=Math.max(ind,arr[i]);
            }
        }

        System.out.println(maxi);


        return ind;
    }
}