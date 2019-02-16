//
//  UIImage+Extension.h
//  FFCategoryKit
//
//  Created by wenjie on 2019/2/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Extension)

///MARK: -- 图片获取 --
+ (instancetype)ff_imagePathWithName:(NSString *)imageName bundle:(NSString *)bundle targetClass:(Class)targetClass;
@end

NS_ASSUME_NONNULL_END
