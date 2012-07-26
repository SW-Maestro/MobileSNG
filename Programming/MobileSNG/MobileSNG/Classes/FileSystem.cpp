//
//  SQLiteiOS.m
//  MobileSNG
//
//  Created by 박 진 on 12. 7. 19..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#include "FileSystem.h"
#include <string>
#include "CCFileUtils.h"

using namespace cocos2d;

FileSystem::FileSystem(const char *DBPath)
{
    std::string pathKey = CCFileUtils::sharedFileUtils()->fullPathFromRelativePath(DBPath);
  
    if( sqlite3_open(pathKey.data(), &m_pDataBase) != SQLITE_OK)
    {
        printf("%s database file error", __FUNCTION__ );
        sqlite3_close(m_pDataBase);
    }
}

BUILDING_INFO FileSystem::searchBuildInfo(int id)
{
    
}

BUILDING_INFO FileSystem::searchBuildInfo(char *name)
{
    
}

CROP_INFO FileSystem::searchCropInfo(int id)
{
    
}

CROP_INFO FileSystem::searchCropInfo(char *name)
{
    
}

ORNAMENT_INFO FileSystem::searchOrnamentInfo(int id)
{
    
}

ORNAMENT_INFO FileSystem::searchOrnamentInfo(char *name)
{
    
}

FileSystem::~FileSystem()
{
    sqlite3_close(m_pDataBase);
    m_pDataBase = NULL;
}

