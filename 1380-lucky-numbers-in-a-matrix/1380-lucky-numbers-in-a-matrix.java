class Solution {
    public List<Integer> luckyNumbers(int[][] matrix) {
        ArrayList<Integer>arr=new ArrayList<>();
        int n=matrix.length;
        int m=matrix[0].length;
        // arr.add(n);
        // arr.add(m);
        for(int i=0;i<n;i++){
            int temp=Integer.MAX_VALUE;
            for(int j=0;j<m;j++){
                temp=Math.min(temp,matrix[i][j]);
                
            }
            arr.add(temp);
        }
        ArrayList<Integer>arr1=new ArrayList<>();
        for(int i=0;i<m;i++){
            int temp=Integer.MIN_VALUE;
            for(int j=0;j<n;j++){
                temp=Math.max(temp,matrix[j][i]);

            }
            arr1.add(temp);
        }
        // System.out.println(arr1.size());
        // System.out.println(arr.size());
        ArrayList<Integer>fin=new ArrayList<>();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int maxi=arr.get(i);
                int mini=arr1.get(j);
                if(matrix[i][j]==mini&&matrix[i][j]==maxi){
                    fin.add(matrix[i][j]);
                }

            }
        }
        return fin;
    }
}