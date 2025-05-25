class Solution {
    boolean pythagoreanTriplet(int[] arr) {
        
        if(arr.length < 2){
            return false; 
        }
        
        HashSet<Integer>hs = new HashSet<>(); 
        
        for(int num : arr){
            hs.add(num); 
        }
        
        for(int i=0;i<arr.length;i++){
            int a = arr[i]; 
            
            for(int j=i+1;j<arr.length;j++){
                int b = arr[j]; 
                
                int root = (int)Math.sqrt(a*a+b*b);
                
                if(hs.contains(root) && root*root == a*a + b*b){
                    return true; 
                }
            }
        }
        return false; 
    }
}