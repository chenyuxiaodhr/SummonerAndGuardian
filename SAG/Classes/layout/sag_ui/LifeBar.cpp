#include "LifeBar.h"
#include "ResourceManager.h"
#include "AppConfig.h"

USING_NS_CC;
using namespace std;

LifeBar::LifeBar()
{
}

LifeBar::~LifeBar()
{
}

LifeBar* LifeBar::create(unsigned int maxHeartCount)
{
    LifeBar *pRet = new (std::nothrow) LifeBar();
    if ( pRet && pRet->init(maxHeartCount) )
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        CC_SAFE_DELETE(pRet);
        return nullptr;
    }
}

bool LifeBar::init(unsigned int maxHeartCount)
{
    if ( ! Node::init() )
    {
        return false;
    }

    m_nMaxHeartCount = maxHeartCount;
    __initHeart();

    return true;
}

void LifeBar::__initHeart()
{
    string heartPath = ResourceManager::getImagerPathByKey("fullHeart");

    float scaleSize = 0.25f;
    float tempX = 0.f;
    Sprite *pHeart = nullptr;
    for (unsigned int i = 0; i < m_nMaxHeartCount; ++i)
    {
        pHeart = Sprite::create(heartPath);
        pHeart->setScale(scaleSize);
        Size heartSize = pHeart->getContentSize();
        heartSize = Size(heartSize.width * scaleSize, heartSize.height * scaleSize);
        pHeart->setContentSize(heartSize);
        pHeart->setAnchorPoint(Vec2::ZERO);
        pHeart->setPosition(Vec2(tempX, 0.f));
        addChild(pHeart);

        tempX += heartSize.width + 3.f;
    }
}


