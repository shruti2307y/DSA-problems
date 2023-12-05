class Solution {
public:
    bool canJump(vector<int>& arr) {
			
		
			int n=arr.size();
			int currJumpPot,maxJumpPot;
			if(n==1)
				return true;
			currJumpPot=arr[0]; 
			maxJumpPot=arr[0]; 

			if(currJumpPot<=0)
				return false;
		for(int i=1;i<n-1;i++)
		{
			
				maxJumpPot--; 
				currJumpPot--; 
				
				maxJumpPot=max(maxJumpPot,arr[i]); 
				
				if(currJumpPot<=0){
					currJumpPot=maxJumpPot; 
				}

				if(currJumpPot<=0)
						return false;
		}

			return true;

    }
};