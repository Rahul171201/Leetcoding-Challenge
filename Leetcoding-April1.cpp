class Solution {
public:
    int singleNumber(vector<int>& nums) {
          
      	int B[1000001];
	for(int i=0;i<=1000000;i++)
	B[i]=0;
	for(int i=0;i<nums.size();i++)
	{
		B[nums[i]]++;
	}
	    int r;
	for(int i=0;i<=1000000;i++)
	{
		if(B[i]==1)
		{
			r=i;
			break;
		}
	}
	return r;
    }
};
