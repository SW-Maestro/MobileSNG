//
//  DataMgr.h
//  MobileSNG
//
//  Created by 박 진 on 12. 7. 19..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#pragma once

#include "DataType.h"
#include <vector>
#include "ObjectInfoMgr.h"

class DataMgr
{
private:
    ObjectInfoMgr                      *m_pObjectInfoMgr;
    USER_INFO                           m_userInfo;

    /*
     으음.. 맵 정리하는거 해야할거 같은데 말야
     
     */
    
public:
    DataMgr(const char *ObjectDBName);
    ~DataMgr();

public:
    ObjectInfoMgr* GetObjectInfoMgr();
};