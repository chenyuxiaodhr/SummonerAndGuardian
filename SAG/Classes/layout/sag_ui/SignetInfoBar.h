/*
文件名：SignetInfoBar.h
作者：jxyi
创建时间：2014/11/25
功能：用于显示玩家持有的纹章信息
*/

#ifndef _SIGNETINFOBAR_H_
#define _SIGNETINFOBAR_H_

#include "cocos2d.h"

class SignetInfoBar : public cocos2d::Node
{
public:
    ~SignetInfoBar();
    CREATE_FUNC(SignetInfoBar);

protected:
    SignetInfoBar();
    virtual bool init() override;

private:

};



#endif // _SIGNETINFOBAR_H_










