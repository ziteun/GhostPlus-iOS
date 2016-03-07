//
//  GPLogViewController.h
//

#import <GhostPlus/GhostPlus.h>

/**
 로그 뷰컨트롤러 (개발용)
 */
@interface GPLogViewController : UIViewController

/**
 로그 기록 켜기
 */
+ (void)on;

/**
 로그 기록 끄기
 */
+ (void)off;

/**
 기본 모드로 보기
 */
- (void)showNormal;

/**
 오버레이 모드로 보기
 */
- (void)showOverlay;

/**
 숨기기
 */
- (void)hide;

@end
