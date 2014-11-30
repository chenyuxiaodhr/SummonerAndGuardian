/*
文件名：ResourceManager.h
作者：jxyi
创建时间：2014/11/30
功能：用于管理游戏中用到的所有图片与声音资源
*/

#ifndef _RESOURCEMANAGER_H_ 
#define _RESOURCEMANAGER_H_

#include <string>

class ResourceManager
{
public:
    static std::string getImagerPathByKey(const std::string &strKey);


};








#endif // _RESOURCEMANAGER_H_




