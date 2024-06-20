class Solution {
public:
    bool canPlace(int force, vector<int>&position,int m)
    {
        int prev = position[0];
        int countBalls = 1;

        for(int i = 1; i< position.size();i++)
        {
            int curr = position[i];
            if(curr-prev >= force)
            {
                countBalls++;
                prev=curr;
            }

            if(countBalls == m)
            break;
        }
        return countBalls == m;
    }

public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n= position.size();

        int result=0;
        int minForce=1;
        int maxForce = position[n-1]-position[0];

        // Binary Search implementation below
        while(minForce<=maxForce)
        {
            int midForce = minForce + (maxForce-minForce)/2;
            if(canPlace(midForce, position,m))
            {
                result = midForce;
                minForce = midForce+1;
            }
            else{
                maxForce = midForce-1;
            }
        }
        return result;
    }
};

// tc -> O(log(maxForce * n)) , n is the size of the position vector
// sc -> O(1) , no extra space used here
