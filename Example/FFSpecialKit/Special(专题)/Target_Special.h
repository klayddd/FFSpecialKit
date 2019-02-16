//
//  Target_Special.h
//  FFSpecialKit_Example
//
//  Created by wenjie on 2019/2/16.
//  Copyright © 2019 stevenJiechen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FFSpecialKit.h"

NS_ASSUME_NONNULL_BEGIN

@interface Target_Special : NSObject

- (UIViewController *)Action_specialDetailViewController:(NSDictionary *)params;
- (NSDictionary *)Action_specialReformerWithOriginData:(NSDictionary *)params;
- (NSDictionary *)Action_specialReformer:(NSDictionary *)params;
- (APIRequest *)Action_specialAPIRequest:(NSDictionary *)params;
@end

NS_ASSUME_NONNULL_END
