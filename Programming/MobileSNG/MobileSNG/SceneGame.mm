//
//  SceneGame.cpp
//  MobileSNG
//
//  Created by 박 진 on 12. 7. 19..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#include "SceneGame.h"

SceneGame::SceneGame()
{
    m_pDataMgr = NULL;
}

SceneGame::~SceneGame()
{
    delete m_pDataMgr;
    m_pDataMgr = NULL;
}

bool SceneGame::init()
{
    if(m_pDataMgr == NULL)
        m_pDataMgr = new DataMgr;

    m_pDataMgr->loadData("ObjectDB.sqlite");
    
    return true;
}