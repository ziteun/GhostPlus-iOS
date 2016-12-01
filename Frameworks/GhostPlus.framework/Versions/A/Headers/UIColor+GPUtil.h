//
//  UIColor+GPUtil.h
//  GhostPlus
//
//  Created by VANSTUDIO on 2016. 12. 1..
//  Copyright © 2016년 GhostCorps. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 UIColor+GPUtil
 */
@interface UIColor (GPUtil)

/**
 컬러 헥스 문자열을 UIColor로 변환
 @param	hexString	컬러 헥스 문자열
 */
+ (UIColor *)colorFromHexString:(NSString *)hexString;

@end
