//
//  UIMgr.cpp
//  MobileSNG
//
//  Created by 박 진 on 12. 7. 23..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#include "UIMgr.h"

using namespace cocos2d;

UIMgr::UIMgr()
{
    m_pShop             = NULL;

    m_pButtonEdit       = NULL;
    m_pButtonShop       = NULL;
    m_pButtonFlat       = NULL;
    m_pButtonFriend     = NULL;
    
    m_pMenu             = NULL;
}

UIMgr::~UIMgr()
{
    m_pMenu->removeAllChildrenWithCleanup(true);
    removeAllChildrenWithCleanup(true);    
    
    SAFE_DELETE(m_pButtonShop);
    SAFE_DELETE(m_pButtonFriend);
    SAFE_DELETE(m_pButtonFlat);
    SAFE_DELETE(m_pButtonEdit);

    SAFE_DELETE(m_pMenu);
    SAFE_DELETE(m_pShop);
}

bool UIMgr::CreateUI(cocos2d::CCScene *pScene, cocos2d::SEL_MenuHandler editFunc, cocos2d::SEL_MenuHandler flatFunc)
{
    CCArray *ary = new CCArray;
    
    m_pButtonEdit = new CCMenuItemImage;
    if((m_pButtonEdit->initWithNormalImage("Edit.png", "Edit.png", NULL, pScene, editFunc)) == false)
    {
        CCLOG("%s <- Can't Create EditButton", __FUNCTION__);
        SAFE_DELETE(m_pButtonEdit);
        return false;
    }
    else {
        m_pButtonEdit->setPosition(160, -120);
        ary->addObject(m_pButtonEdit);
    }

    m_pButtonFlat = new CCMenuItemImage;
    if((m_pButtonFlat->initWithNormalImage("Flat.png", "Flat.png", NULL, pScene, flatFunc)) == false)
    {
        CCLOG("%s <- Can't Create FlatButton", __FUNCTION__);
        SAFE_DELETE(m_pButtonFlat);
        return false;
    }
    else {
        m_pButtonFlat->setPosition(210, 120);
        ary->addObject(m_pButtonFlat);
    }

    m_pButtonFriend = new CCMenuItemImage;
    if((m_pButtonFriend->initWithNormalImage("Friends.png", "Friends.png", NULL, this, menu_selector(UIMgr::_buttonFriend))) == false)
    {
        CCLOG("%s <- Can't Create FriendButton", __FUNCTION__);
        SAFE_DELETE(m_pButtonFriend);
        return false;
    }
    else {
        m_pButtonFriend->setPosition(-210, -120);
        ary->addObject(m_pButtonFriend);
    }

    m_pButtonShop = new CCMenuItemImage;
    if((m_pButtonShop->initWithNormalImage("Shop.png", "Shop.png", NULL, this, menu_selector(UIMgr::_buttonShop))) == false)
    {
        CCLOG("%s <- Can't Create ShopButton", __FUNCTION__);
        SAFE_DELETE(m_pButtonShop);
        return false;
    }
    else {
        m_pButtonShop->setPosition(210, -120);
        ary->addObject(m_pButtonShop);
    }
    
    m_pMenu = new CCMenu;
    m_pMenu->initWithArray(ary);    
    addChild(m_pMenu);
    
    return true;
}

void UIMgr::_buttonShop(CCObject *pSender)
{
    CCLOG(__FUNCTION__);
}

void UIMgr::_buttonFriend(CCObject *pSender)
{
    CCLOG(__FUNCTION__);
}

/*void UIMgr::addUI()
{
    m_pScene->addChild(m_pScene);
    m_pScene->addChild(m_pMenu);
    m_pScene->addChild(m_pShop);
    //SHOP MOVE 
}*/