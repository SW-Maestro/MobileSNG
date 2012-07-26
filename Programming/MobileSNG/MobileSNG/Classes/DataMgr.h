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
<<<<<<< HEAD
    ObjectInfoMgr                      *m_pObjectInfoMgr;
    USER_INFO                           m_userInfo;

    /*
     으음.. 맵 정리하는거 해야할거 같은데 말야
     생각해보자 그래.. 생각을 해보자 생각 두잇두잇 생각 두잇
     
     */
=======
    std::vector<BUILDING_INFO>      m_buildInfo;
    std::vector<CROP_INFO>          m_cropInfo;
    std::vector<ORNAMENT_INFO>     m_ornamentInfo;
>>>>>>> e8d7f9bb19545c609dee500a6e60af2b28670ce7
    
public:
    DataMgr(const char *ObjectDBName);
    ~DataMgr();

public:
    ObjectInfoMgr* GetObjectInfoMgr();
};