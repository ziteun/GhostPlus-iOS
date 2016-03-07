//
//  GPViewController.h
//  Created by VANSTUDIO
//

#import <UIKit/UIKit.h>
#import "GPView.h"

/**
 GPViewController
 */
@interface GPViewController : UIViewController

/** 상태바 (for iOS6) */
@property (nonatomic, strong) UIView *statusBar;

/**
 상태바 색상 (for iOS6)
 */
- (UIColor *)statusBarColor;

/**
 viewWillAppear 최초 실행시
 */
- (BOOL)isFirstViewWillAppear;

@end
