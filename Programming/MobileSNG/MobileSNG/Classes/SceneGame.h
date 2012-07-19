//
//  SceneGame.h
//  MobileSNG
//
//  Created by 박 진 on 12. 7. 19..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#pragma once

#include "cocos2d.h"
#include "DataMgr.h"

class SceneGame : public cocos2d::CCLayer
{
    DataMgr *m_pDataMgr;
    
    
public:    
    SceneGame();
    ~SceneGame();
    
    bool init();
};