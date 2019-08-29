//
//  TestModel.h
//  PYModel
//
//  Created by 张鹏宇 on 2019/8/29.
//  Copyright © 2019 Wanye1121. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TestModel : NSObject

@property (nonatomic, copy) NSString *a;

@property (nonatomic, strong) NSNumber *b;

@property (nonatomic, strong) TestModel *c;

@end

NS_ASSUME_NONNULL_END
