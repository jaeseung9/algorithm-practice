#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) 
{
    // 선수 이름 인덱스를 저장해줄 map
    map<string, int> playerIndex;
    for (int i = 0; i < players.size(); i++)
    {
        playerIndex[players[i]] = i;
    }

    for (int i = 0; i < callings.size(); i++)
    {
        string playerName = callings[i];
        // playerIndex에서 이름을 찾고
        if (playerIndex.find(playerName) != playerIndex.end())
        {
            int index = playerIndex[playerName];
            if (index > 0)
            {
                // 앞 선수와 뒤 선수를 swap를 사용해서 바꿔주고
                swap(players[index], players[index-1]);
                // playerIndex에 정보를 업데이트 해준다.
                playerIndex[players[index]] = index;
                playerIndex[players[index-1]] = index-1;
            }
        }
    }
    
    return players;
}