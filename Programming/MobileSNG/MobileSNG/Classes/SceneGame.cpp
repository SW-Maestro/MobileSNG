#include "SceneGame.h"
#include "Map.h"

using namespace cocos2d;


SceneGame::SceneGame() : m_pMap(NULL)
{
    m_pUIMgr = NULL;
}

SceneGame::~SceneGame()
{
    removeAllChildrenWithCleanup(true);
    
    SAFE_DELETE(m_pMap);
    
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

    addChild(m_pUIMgr, 1);
    
    CCSize wsize = CCDirector::sharedDirector()->getWinSize();
    
    m_pMap = new Map();
    m_pMap->init();
    m_pMap->setAnchorPoint(ccp(0.5, 0.5));
    m_pMap->setScale(1);
    m_pMap->setPosition(ccp(wsize.width / 2, wsize.height / 2));
    addChild(m_pMap, 0);

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