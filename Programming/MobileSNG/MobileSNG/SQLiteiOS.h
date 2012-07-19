//
//  SQLiteiOS.h
//  MobileSNG
//
//  Created by 박 진 on 12. 7. 19..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

//따로 뭐, 테이블에 추가한다거나 하는 작업은 없을것 같으니까
//열고 검색하는 기능만 일단 구현한다

@interface SQLiteiOS : NSObject
{
    sqlite3 *_dataBase;
}

-(id)initWithLoadDBPath:(NSString*)ObjectDB;
-(NSMutableArray*)searchData:(NSString*)commend;

@end
