#include <string>
#include <map>

#include "ResourceManager.h"

using namespace std;

static map<string, string> g_mapResource = {
    { "fullHeart", "images/information_layer/heart.png" },
    { "emptyHeart", "images/information_layer/emptyheart.png" },
    { "attackIcon", "images/information_layer/attack.png" },
    { "defendIcon", "images/information_layer/defend.png" },
    { "moveIcon", "images/information_layer/move.png" },
    { "magicIcon", "images/information_layer/magic.png" },
    { "trackIcon", "images/information_layer/track.png" },
};

string ResourceManager::getImagerPathByKey(const std::string &strKey)
{
    auto iter = g_mapResource.find(strKey);
    if ( iter != g_mapResource.end() )
    {
        return iter->second;
    }

    return string();
}





