//
//  NSObject+Extension.h
//  FFCategoryKit
//
//  Created by wenjie on 2019/2/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (Extension)
/// MARK: -- 自定义字体资源路径 --
+ (instancetype)ff_customFontPathWithName:(NSString *)fontName bundle:(NSString *)bundle targetClass:(Class)targetClass;
@end

NS_ASSUME_NONNULL_END
