//
//  Shop.cpp
//  MobileSNG
//
//  Created by 박 진 on 12. 7. 23..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#include "Shop.h"

using namespace cocos2d;

Shop::Shop()
{
    m_pBackGround = NULL;
}

Shop::~Shop()
{
    removeAllChildrenWithCleanup(true);
    
    if(m_pBackGround)
    {
        delete m_pBackGround;
        m_pBackGround = NULL;
    }
}

bool Shop::init()
{
    if( (m_pBackGround = CCSprite::create("HelloWorld.png")) == NULL )
    {
        CCLOG("%s <- Can't Create Shop BackGround", __FUNCTION__);
        return false;
    }
    else {
        CCSize size = CCDirector::sharedDirector()->getWinSize();
        
        m_pBackGround->setPosition(CCPointMake(size.width/2.f, size.height/2.f));
        m_pBackGround->setRotation(180.f);
    }
    
    
    addChild(m_pBackGround);
    
    return true;
}