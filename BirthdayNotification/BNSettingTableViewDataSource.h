//
//  BNSettingTableViewDataSource.h
//  BirthdayNotification
//
//  Created by Liu Weilong on 28/8/14.
//  Copyright (c) 2014 Liu Weilong. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^TableViewCellConfigureBlock)(id cell, id index);

@interface BNSettingTableViewDataSource : NSObject <UITableViewDataSource>

- (id)initWithCellIdentifier:(NSString *)cellIdentifier cellConfigureBlock:(TableViewCellConfigureBlock)cellConfigureBlock;

@end
