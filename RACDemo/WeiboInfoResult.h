//
//  WeiboInfoResult.h
//  RACDemo
//
//  Created by 張帥 on 2016/7/29.
//  Copyright © 2016年 張帥. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StatusModel.h"

@interface WeiboInfoResult : NSObject

@property (nonatomic, strong) NSArray<StatusModel *> *statuses;

@end
