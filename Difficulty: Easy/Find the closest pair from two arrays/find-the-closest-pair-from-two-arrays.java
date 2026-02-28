class Solution {
    public static ArrayList<Integer> findClosestPair(int arr1[], int arr2[], int x) {
        // code here
        int n = arr1.length;
        int m = arr2.length;
        
        int i = n - 1; // tracking arr1
        int j = 0; // tracking arr2
        int prevDiff = Integer.MAX_VALUE;
        int val1 = -1;
        int val2 = -1;
        while((i >= 0) && (j < m)){
            if(Math.abs((arr1[i] + arr2[j]) - x) <= prevDiff){
                val1 = arr1[i];
                val2 = arr2[j];
                prevDiff = Math.abs((val1 + val2) - x);
            }

            if((arr1[i] + arr2[j]) <= x){
                j++;
            }else{
                i--;
            }
        }
        
        ArrayList<Integer> ansList = new ArrayList<>();
        ansList.add(val1);
        ansList.add(val2);
        
        return ansList;
    }
}