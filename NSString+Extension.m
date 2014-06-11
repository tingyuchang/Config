//
//  NSString+Extension.m
//  LoginSample
//
//  Created by Matt Chang on 2014/6/11.
//  Copyright (c) 2014年 Accuvally Inc. All rights reserved.
//

#import "NSString+Extension.h"

@implementation NSString (Extension)

+ (BOOL)isEmpty:(NSString *)string {
    return (string == nil || string.length == 0);
}

@end
