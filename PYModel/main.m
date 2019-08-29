//
//  main.m
//  PYModel
//
//  Created by 张鹏宇 on 2019/8/29.
//  Copyright © 2019 Wanye1121. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TestModel.h"
#import "NSObject+KeyValues.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        
        
        TestModel * testModel = [TestModel objectWithKeyValues:@{@"c":@{@"a": @"456"},@"a": @"123",@"b":@(2)}];
        
        NSLog(@"%@",testModel.keyValuesWithObject);
    }
    return 0;
}
