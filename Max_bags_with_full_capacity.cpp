class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        //1. vacancy =capacity - rocks
        //2. sort
        //3. traverse if it is 0 than increament

        vector<int>vacancy(capacity.size());
        for(int i=0; i<capacity.size();i++)
        {
            vacancy[i]=capacity[i]-rocks[i];

        }

        sort(vacancy.begin(),vacancy.end());
        int count =0;
        for(int i=0; i<capacity.size();i++)
        {
            if(vacancy[i]==0)
            {
                count++;

            }
            else{
                if(vacancy[i]<=additionalRocks)
                {
                    additionalRocks -= vacancy[i] ;
                    count++;
                }
                else{
                    break;
                }
            }
        }
        return count;      
    }
};
