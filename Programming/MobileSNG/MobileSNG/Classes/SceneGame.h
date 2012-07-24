#pragma once

#include "cocos2d.h"
#include "UIMgr.h"

class SceneGame : public cocos2d::CCLayer
{
private:
    UIMgr           *m_pUIMgr;
    
public:
    SceneGame();
    ~SceneGame();
    
public:
    bool init();
    
private:
    void _editFunc(CCObject *pSender);
    void _flatFunc(CCObject *pSender);
};