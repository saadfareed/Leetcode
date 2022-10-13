//Name: Hussain Iftikhar
// userName: hussainiftikhar5242
//approach: First store the n values in vector then appy outer loop which will check the first condition and then appply inner for loop to k value which will firstly store the front value in variable and then remove the first value then again push back the value in vector after for loop remove the front value. again for removing the player
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> player;
        for(int i=1;i<=n;i++)
        {
            player.push_back(i);
        }
        int value;
        while(true)
        {
            if(player.size() == 1)
            {
                break;
            }
            for(int i=1;i<k;i++)
            {
                value=player.front();
                player.erase(player.begin());
                player.push_back(value);
            }
            player.erase(player.begin());
        }
        return player.front();
        
    }
};
