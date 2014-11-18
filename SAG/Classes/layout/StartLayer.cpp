#include "StartLayer.h"
#include "CharConvert.h"

USING_NS_CC;

StartLayer::StartLayer()
    : m_bPlayIsPushed(false)
    , m_bEditIsPushed(false)
{


}

StartLayer::~StartLayer()
{

}

bool StartLayer::init()
{
    if ( ! Layer::init() )
    {
        return false;
    }

    Vec2 winSize = Director::getInstance()->getWinSize();

    LabelTTF *pTitle = LabelTTF::create();
    pTitle->setString(CharConvert::a2u("召唤与守护"));
    pTitle->setFontSize(30.f);
    pTitle->setPosition(Vec2(winSize.x / 2, 325.f));
    this->addChild(pTitle);

    __addPlayEntry();
    __addEditEntry();

    return true;
}

void StartLayer::__addEditEntry()
{
    LabelTTF *pTitle = LabelTTF::create();
    pTitle->setString(CharConvert::a2u("编辑骰盒"));
    pTitle->setFontSize(20.f);
    pTitle->setPosition(Vec2(160, 70.f));
    this->addChild(pTitle);

    EventListenerTouchOneByOne *pTouchListener = EventListenerTouchOneByOne::create();
    pTouchListener->setSwallowTouches(true);
    pTouchListener->onTouchBegan = [pTitle, this](Touch *pTouch, Event *pEvent){
        if ( pEvent->getType() == Event::Type::TOUCH )
        {
            Vec2 point = pTitle->convertTouchToNodeSpace(pTouch);
            Rect rec = pTitle->getBoundingBox();
            rec.origin = Vec2::ZERO;
            if ( rec.containsPoint(point) )
            {
                m_bEditIsPushed = true;
                pTitle->setScale(1.3f);
                log("begin");
                return true;
            }
        }
        m_bEditIsPushed = false;
        return false;
    };
    pTouchListener->onTouchCancelled = [pTitle, this](Touch *pTouch, Event *pEvent){
        m_bEditIsPushed = false;
        pTitle->setScale(1.f);
    };
    pTouchListener->onTouchEnded = [pTitle, this](Touch *pTouch, Event *pEvent){
        if (pEvent->getType() == Event::Type::TOUCH)
        {
            Vec2 point = pTitle->convertTouchToNodeSpace(pTouch);
            Rect rec = pTitle->getBoundingBox();
            rec.origin = Vec2::ZERO;
            if ( rec.containsPoint(point) && m_bEditIsPushed )
            {
                m_bEditIsPushed = false;
                pTitle->setScale(1.f);
                //switch to EditLayer
            }
        }
    };
    pTitle->getEventDispatcher()->addEventListenerWithSceneGraphPriority(pTouchListener, pTitle);
}

void StartLayer::__addPlayEntry()
{
    LabelTTF *pTitle = LabelTTF::create();
    pTitle->setString(CharConvert::a2u("开始对战"));
    pTitle->setFontSize(20.f);
    pTitle->setPosition(Vec2(160, 140.f));
    this->addChild(pTitle);

    EventListenerTouchOneByOne *pTouchListener = EventListenerTouchOneByOne::create();
    pTouchListener->setSwallowTouches(true);
    pTouchListener->onTouchBegan = [pTitle, this](Touch *pTouch, Event *pEvent){
        if (pEvent->getType() == Event::Type::TOUCH)
        {
            Vec2 point = pTitle->convertTouchToNodeSpace(pTouch);
            Rect rec = pTitle->getBoundingBox();
            rec.origin = Vec2::ZERO;
            if (rec.containsPoint(point))
            {
                m_bPlayIsPushed = true;
                pTitle->setScale(1.3f);
                log("begin");
                return true;
            }
        }
        m_bPlayIsPushed = false;
        return false;
    };
    pTouchListener->onTouchCancelled = [pTitle, this](Touch *pTouch, Event *pEvent){
        m_bPlayIsPushed = false;
        pTitle->setScale(1.f);
    };
    pTouchListener->onTouchEnded = [pTitle, this](Touch *pTouch, Event *pEvent){
        if (pEvent->getType() == Event::Type::TOUCH)
        {
            Vec2 point = pTitle->convertTouchToNodeSpace(pTouch);
            Rect rec = pTitle->getBoundingBox();
            rec.origin = Vec2::ZERO;
            if (rec.containsPoint(point) && m_bPlayIsPushed)
            {
                m_bPlayIsPushed = false;
                pTitle->setScale(1.f);
                //switch to PlayLayer
            }
        }
    };
    pTitle->getEventDispatcher()->addEventListenerWithSceneGraphPriority(pTouchListener, pTitle);
}

