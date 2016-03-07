//
//  UIScreen+GPUtil.h
//  Created by VANSTUDIO
//

#import <UIKit/UIKit.h>

/**
 UIScreen+GPUtil
 */
@interface UIScreen (GPUtil)

/**
 현재 스크린의 바운드
 */
- (CGRect)currentBounds;

/**
 스크린 방향에 따른 바운드
 @param orientation 스크린 방향
 */
- (CGRect)boundsForOrientation:(UIInterfaceOrientation)orientation;

@end
