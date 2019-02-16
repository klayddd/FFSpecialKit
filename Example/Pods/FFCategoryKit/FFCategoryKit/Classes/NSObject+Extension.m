//
//  NSObject+Extension.m
//  FFCategoryKit
//
//  Created by wenjie on 2019/2/16.
//

#import "NSObject+Extension.h"

@implementation NSObject (Extension)
+ (instancetype)ff_customFontPathWithName:(NSString *)fontName bundle:(NSString *)bundle targetClass:(Class)targetClass
{
    NSBundle *currentBundle = [NSBundle bundleForClass:targetClass];
    NSString *path = [currentBundle pathForResource:fontName ofType:nil inDirectory:bundle];
    return path;
}
@end
