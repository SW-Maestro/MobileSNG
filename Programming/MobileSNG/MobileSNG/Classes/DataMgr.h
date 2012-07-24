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
#include "FileSystem.h"

class DataMgr
{
private:
    std::vector<BUILDING_INFO>      m_buildInfo;
    std::vector<CROP_INFO>          m_cropInfo;
    std::vector<ORANAMENT_INFO>     m_oranamentInfo;
    
public:
    DataMgr();
    ~DataMgr();

public:
    bool loadData(const char *DBPath);
};