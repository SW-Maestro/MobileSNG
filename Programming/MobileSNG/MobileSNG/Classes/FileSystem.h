//
//  SQLiteiOS.h
//  MobileSNG
//
//  Created by 박 진 on 12. 7. 19..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#pragma once

#include <sqlite3.h>
#include "DataType.h"

class FileSystem
{
private:
    sqlite3 *m_pDataBase;
    
public:
    FileSystem(const char *DBPath);
    ~FileSystem();
    
    BUILDING_INFO   searchBuildInfo(int id);
    BUILDING_INFO   searchBuildInfo(char *name);
    
    CROP_INFO       searchCropInfo(int id);
    CROP_INFO       searchCropInfo(char *name);

    ORANAMENT_INFO  searchOranamentInfo(int id);
    ORANAMENT_INFO  searchOranamentInfo(char *name);
};