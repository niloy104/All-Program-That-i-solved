class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
   int def=arr[1]-arr[0];
        bool check=true;
        for(int i=2;i<arr.size();i++)
        {
            if((arr[i]-arr[i-1])!=def)
            {
               return false;
            }
          
        }
        
        return true;}
};
//Acceptd....