//
//  DebugManager.h
//  Created by VANSTUDIO
//

#import <UIKit/UIKit.h>

/**
 디버그 매니저
 */
@interface GPDebugManager : NSObject <UIActionSheetDelegate>

/**
 싱글톤 객체
 */
+ (GPDebugManager *)sharedManager;

/**
 초기화
 */
- (void)initialize;

/**
 디버깅툴 보이기
 */
- (void)showDebuggingTool;

/**
 디버깅툴에 버튼 추가
 @param title 버튼 타이틀
 @param onclick 액션
 */
- (void)addButtonWithTitle:(NSString *)title onclick:(void (^)(void))onclick;

/**
 버튼 모두제거
 */
- (void)removeAllButtons;

@end
