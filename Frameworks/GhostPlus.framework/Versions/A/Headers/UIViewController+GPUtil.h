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
 최상위 present 가능한 뷰컨트롤러
 */
+ (UIViewController *)topPresentableViewController;
/**
 보이는 최상위 뷰컨트롤러
 */
- (UIViewController *)topVisibleViewController;
@end
