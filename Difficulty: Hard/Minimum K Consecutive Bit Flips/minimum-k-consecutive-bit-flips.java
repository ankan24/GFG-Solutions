 class Solution {
    public int kBitFlips(int[] arr, int k) {
        // code here
        int n = arr.length;
        int[] flipCanceller = new int[n+1];
        int flip = 0;
        int res = 0;
        
        for(int i = 0; i < n; i++){
            flip ^= flipCanceller[i]; //this will cancel the flipping effect of
                                      //arr[i-k]
            
            if(flip == 1){
                arr[i] ^= 1;
            }
            
            if(arr[i] == 0){
                //check kya ham log flip karr skete h ??
                if(i + k > n) return -1; //flipping not possible
                
                flip ^= 1; //universal flipping effect, effect i to n-1 
                //that's why need to cut it's flipping effect at i+k pos by:
                
                flipCanceller[i+k] = 1; //at i+k its flipping effect get cancel out
                
                res+=1; //Jitni baar 0 encounter kiya utni baar flipping ki 
                        // so ans+=1
            }
        }
        
        return res;
    }
}

