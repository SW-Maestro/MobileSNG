#pragma once

#include "cocos2d.h"
#include "UIMgr.h"

class Map;

class SceneGame : public cocos2d::CCLayer
{
private:
    Map             * m_pMap;
    UIMgr           * m_pUIMgr;
    
public:
    SceneGame();
    ~SceneGame();
    
public:
    bool init();
    
private:
    void _editFunc(CCObject *pSender);
    void _flatFunc(CCObject *pSender);
};