//
//  UIMgr.h
//  MobileSNG
//
//  Created by 박 진 on 12. 7. 23..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#pragma once

#include "cocos2d.h"
#include "Shop.h"

class UIMgr : public cocos2d::CCNode
{
private:
    Shop                        *m_pShop;
    
    cocos2d::CCMenuItemImage    *m_pButtonShop;
    cocos2d::CCMenuItemImage    *m_pButtonEdit;
    cocos2d::CCMenuItemImage    *m_pButtonFlat;
    cocos2d::CCMenuItemImage    *m_pButtonFriend;
    
    cocos2d::CCMenu             *m_pMenu;
    
public:
    UIMgr();
    ~UIMgr();

private:
    void _buttonShop(cocos2d::CCObject *pSender);
    void _buttonFriend(cocos2d::CCObject *pSender);

public:
    bool CreateUI(cocos2d::CCScene *pScene, 
                  cocos2d::SEL_MenuHandler editFunc, 
                  cocos2d::SEL_MenuHandler flatFunc);
};