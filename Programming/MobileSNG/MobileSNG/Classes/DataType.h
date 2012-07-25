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
    
    OBJECT_INFO()
    {
        time = 0;
        reward = 0;
    }
    
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
    
    ITEM_INFO()
    {
        objectID = 0;
        price = 0;
    }
    
    ITEM_INFO(int _objectID, const char *_name, int _price)
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

    BUILDING_INFO() : OBJECT_INFO(), ITEM_INFO() { nowBuildTime = 0; }
    BUILDING_INFO(OBJECT_INFO objectInfo, ITEM_INFO itemInfo, 
                  int _nowBuildTime) : OBJECT_INFO(objectInfo), 
                                    ITEM_INFO(itemInfo)
    {
        nowBuildTime = _nowBuildTime;
    }
};

struct CROP_INFO : public OBJECT_INFO, public ITEM_INFO
{
    CROP_INFO() : OBJECT_INFO(), ITEM_INFO() { }
    
    CROP_INFO(OBJECT_INFO objectInfo, ITEM_INFO itemInfo) :
    OBJECT_INFO(objectInfo), ITEM_INFO(itemInfo)
    {
    
    }
};

struct ORNAMENT_INFO : public ITEM_INFO
{
    ORNAMENT_INFO() : ITEM_INFO()
    {
        
    }
    ORNAMENT_INFO(int _objectID, int _price, const char *_name) :
    ITEM_INFO(_objectID, _name, _price)
    {
        
    }
};

struct USER_INFO
{
    int level;
    int money;
    int cash;
    int exp;
    
    USER_INFO(int _level = 0, int _money = 0, int _cash = 0, int _exp = 0)
    {
        level   = _level;
        money   = _money;
        cash    = _cash;
        exp     = _exp;
    }
};