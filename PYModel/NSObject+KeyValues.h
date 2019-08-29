//
//  NSObject+KeyValues.h
//  PYModel
//
//  Created by 张鹏宇 on 2019/8/29.
//  Copyright © 2019 Wanye1121. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (KeyValues)

+(id)objectWithKeyValues:(NSDictionary *)aDictionary;

-(NSDictionary *)keyValuesWithObject;

@end

NS_ASSUME_NONNULL_END
