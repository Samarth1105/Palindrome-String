class Solution{
public:	
	int isPalindrome(string S){
	    int n=S.size();
	    for(int i=0,j=n-1;i<j;i++,j--){
	        if(S[i]!=S[j]){
	            return 0;
	        }
	    }
	    return 1;
	    
	}
};
