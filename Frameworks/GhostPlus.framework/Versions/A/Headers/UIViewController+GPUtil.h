//
//  UIViewController+GPUtil.h
//  Created by VANSTUDIO
//

#import <UIKit/UIKit.h>

/**
 UIViewController+GPUtil
 */
@interface UIViewController (GPUtil)

/**
 최상위 뷰컨트롤러
 */
+ (UIViewController *)topViewController;
/**
 보이는 최상위 뷰컨트롤러
 */
- (UIViewController *)topVisibleViewController;
/**
 상태바 아래에 위치하는 NSLayoutConstraint의 Constant 수치 업데이트
 @param constraint 대상 NSLayoutConstraint
 */
- (void)updateStatusBarUnderViewConstraint:(NSLayoutConstraint *)constraint;
/**
 상태바 아래에 위치하는 NSLayoutConstraint의 Constant 수치 업데이트
 @param constraint 대상 NSLayoutConstraint
 @param defaultConstant Constant 수치
 */
- (void)updateStatusBarUnderViewConstraint:(NSLayoutConstraint *)constraint defaultConstant:(CGFloat)defaultConstant;
@end
