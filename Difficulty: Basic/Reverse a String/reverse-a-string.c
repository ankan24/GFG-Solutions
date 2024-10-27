//{ Driver Code Starts
// Initial Template for C
#include <stdio.h>
#include <string.h>


// } Driver Code Ends
// User function Template for C
char* reverseString(char* s) {
    // Code Here
     int len = strlen(s);
    char* ans = (char*)malloc((len + 1) * sizeof(char)); 
    if (ans == NULL) return NULL;
    
    for (int i = 0; i < len; i++) {
        ans[i] = s[len - i - 1];
    }
    ans[len] = '\0';

    return ans;
}

//{ Driver Code Starts.
char* reverseWord(char* s);

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[100001];
        scanf("%s", s);
        printf("%s\n", reverseString(s));

        printf("~%s", "\n");
    }
    return 0;
}
// } Driver Code Ends