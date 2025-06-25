class Solution {
    boolean sameFreq(String s) {
        HashMap<Character, Integer> freq = new HashMap<>();
        
        for (char ch: s.toCharArray()) {
            freq.put(ch, freq.getOrDefault(ch, 0) + 1);
        }
        
        // Frequencies of characters
        int freq1 = -1;
        int freq2 = -1;
        
        // Count of frequencies
        int c1 = 0, c2 = 0;
        
        for (char ch: freq.keySet()) {
            int value = freq.get(ch);
            
            if (freq1 == -1) {
                freq1 = value;
                c1 = 1;
            } else if (freq1 == value) {
                c1 += 1;
            } else if (freq2 == -1) {
                freq2 = value;
                c2 = 1;
            } else if (freq2 == value) {
                c2 += 1;
            } else {
                // If more than 2 frequencies are available.
                // removing one character cannot make the frequencies equal
                return false;
            }
        }
        
        // If there is only one character in the entire string 
        // eg: aaa
        if (freq2 == -1) return true;
        
        // eg: xxxy, bba 
        if ((freq1 == 1 && c1 == 1) || (freq2 == 1 && c2 == 1)) return true;
        
        // reoving one character from a frequency makes them equal
        // eg: aaabbcc 
        if (c1 == 1 && freq1 - 1 == freq2) return true;
        if (c2 == 1 && freq2 - 1 == freq1) return true;
        
        return false;
    }
}