class Solution {
    public int minRange(int a, int b, int c) {
        int [] arr= new int[3];
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        Arrays.sort(arr);
        int minVal=arr[0];
        int maxVal=arr[2];
        int third=arr[1];
        while(true){
            if(maxVal<=minVal+third){
                break;
               
            }
            else{
                maxVal=third+minVal;
            }
        }


        return maxVal-minVal;

    }
}



