#include "SceneGame.h"

using namespace cocos2d;


SceneGame::SceneGame()
{
    m_pUIMgr = NULL;
}

SceneGame::~SceneGame()
{
    removeAllChildrenWithCleanup(true);
    
    if(m_pUIMgr)
    {
        delete m_pUIMgr;
        m_pUIMgr = NULL;
    }
}

bool SceneGame::init()
{
    if ( !CCLayer::init() )     return false;
    
    m_pUIMgr = new UIMgr;
    m_pUIMgr->CreateUI(reinterpret_cast<CCScene*>(this),
                       menu_selector(SceneGame::_editFunc), menu_selector(SceneGame::_flatFunc));

    CCSprite* pSprite = CCSprite::create("HelloWorld.png");
    pSprite->setAnchorPoint(CCPointMake(0, 0));
    pSprite->setPosition(CCPointMake(0, 0));
 
    this->addChild(pSprite, 0);
    addChild(m_pUIMgr);

    return true;
}

void SceneGame::_editFunc(CCObject *pSender)
{
    CCLOG(__FUNCTION__);
}

void SceneGame::_flatFunc(CCObject *pSender)
{
    CCLOG(__FUNCTION__);
}