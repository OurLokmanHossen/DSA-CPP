class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      
    int iniAltitude = 0;
    int highAltitude = 0;
     for(int i = 0; i < gain.size(); i++ )
     {
        iniAltitude += gain[i];
        highAltitude = max(highAltitude, iniAltitude);
     }

     return highAltitude;
        
    }
};