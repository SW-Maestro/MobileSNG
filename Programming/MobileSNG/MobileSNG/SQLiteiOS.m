//
//  SQLiteiOS.m
//  MobileSNG
//
//  Created by 박 진 on 12. 7. 19..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#import "SQLiteiOS.h"

@implementation SQLiteiOS

-(id)initWithLoadDBPath:(NSString*)ObjectDB
{
    if( (self = [super init]) )
    {
        NSString *filePath = [NSString stringWithFormat:@"%@/%@", [[NSBundle mainBundle] resourcePath], ObjectDB];
        
        NSLog(@"%@", filePath);
                
        int msg = sqlite3_open([filePath UTF8String], &_dataBase);
        
        if( msg != SQLITE_OK)
        {
            sqlite3_close(_dataBase);
            NSLog(@"DB File is NULL");

            return nil;
        }
    }
    
    return self;
}

-(NSMutableArray*)searchData:(NSString*)commend
{
    sqlite3_stmt *selectStatement;
    NSMutableArray *array = [NSMutableArray array];
    
    const char *cmd = [commend UTF8String];
    
    int msg = sqlite3_prepare_v2(_dataBase, cmd, -1, &selectStatement, NULL);
    
    if( msg == SQLITE_OK )
    {
        while (sqlite3_step(selectStatement) == SQLITE_ROW) {
            int no = sqlite3_column_int(selectStatement, 0);
            
            NSNumber *num = [NSNumber numberWithInt:no];
            [array addObject:num];
        }
    }
    
    return array;
}

-(void)dealloc
{
    sqlite3_close(_dataBase);
    _dataBase = nil;

    [super dealloc];
}

@end
