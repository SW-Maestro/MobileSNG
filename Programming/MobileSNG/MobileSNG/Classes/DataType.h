//
//  TypeDocument.h
//  MobileSNG
//
//  Created by 박 진 on 12. 7. 19..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#pragma once

#include <string>

struct OBJECT_INFO
{
    int time;
    int reward;
    
    OBJECT_INFO(int _time, int _reward)
    {
        time        = _time;
        reward      = _reward;
    }
};

struct ITEM_INFO
{
    int             objectID;
    int             price;
    std::string     name;
    
    ITEM_INFO(int _objectID, const char *_name, int _price = 0)
    {
        objectID    = _objectID;
        price       = _price;
        
        name = _name;
    }
    
    ~ITEM_INFO()
    {
        name.clear();
    }
};

struct BUILDING_INFO : public OBJECT_INFO, public ITEM_INFO
{
    int nowBuildTime;

    BUILDING_INFO(OBJECT_INFO &objectInfo, ITEM_INFO &itemInfo, 
                  int _buildTime) : OBJECT_INFO(objectInfo), 
                                    ITEM_INFO(itemInfo)
    {
        nowBuildTime = _buildTime;
    }
};

struct CROP_INFO : public OBJECT_INFO, public ITEM_INFO
{
    CROP_INFO(OBJECT_INFO &objectInfo, ITEM_INFO &itemInfo) :
    OBJECT_INFO(objectInfo), ITEM_INFO(itemInfo)
    {
    
    }
};

//CA Edit 120725 ORANAMENT -> ORNAMENT
struct ORNAMENT_INFO : public ITEM_INFO
{
    
};