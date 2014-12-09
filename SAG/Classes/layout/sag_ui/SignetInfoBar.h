/*
�ļ�����SignetInfoBar.h
���ߣ�jxyi
����ʱ�䣺2014/11/25
���ܣ�������ʾ��ҳ��е�������Ϣ
*/

#ifndef _SIGNETINFOBAR_H_
#define _SIGNETINFOBAR_H_

#include "cocos2d.h"
#include "DataManager.h"

class SignetInfoBar : public cocos2d::Node
{
public:
    ~SignetInfoBar();
    CREATE_FUNC(SignetInfoBar);

    void setSignet(const Signet &stSignet);

protected:
    SignetInfoBar();
    virtual bool init() override;

private:

};



#endif // _SIGNETINFOBAR_H_










