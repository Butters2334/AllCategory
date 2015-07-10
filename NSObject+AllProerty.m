//
//  UIView+AllProerty.m
//  ClassDemo
//
//  Created by Ancc on 15/7/9.
//  Copyright (c) 2015年 Ancc. All rights reserved.
//

#import "NSObject+AllProerty.h"
#import <objc/runtime.h>
@implementation NSObject (AllProerty)
-(NSString *)allProperty
{
    NSMutableString *allPP = [NSMutableString new];
    unsigned int outCount;
    objc_property_t *pp = class_copyPropertyList([self class], &outCount);
    for(NSInteger index=0;index<outCount;index++)
    {
        objc_property_t property = pp[index];
        NSString *name = @(property_getName(property));
//        NSString *att  = @(property_getAttributes(property));
        NSString *value = [self valueForKey:name];
        [allPP appendFormat:@"\n%@ = %@ \n",name,value];
    }
    if(allPP.length>0)
    {
        [allPP deleteCharactersInRange:NSMakeRange(allPP.length-1, 1)];
    }
    return allPP;
}
@end
