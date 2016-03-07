//
//  UIControl+GPActionBlock.h
//  Created by VANSTUDIO
//

#import <UIKit/UIKit.h>

/** UIControlEventHandler */
typedef void(^UIControlEventHandler)(id sender, UIEvent *event);

/**
 UIControl+GPActionBlock
 */
@interface UIControl (GPActionBlock)

/**
 이벤트 등록
 @param handler 핸들러
 @param controlEvent 컨트롤이벤트
 */
- (void)addEventHandler:(UIControlEventHandler)handler forControlEvent:(UIControlEvents)controlEvent;
/**
 이벤트 삭제
 @param controlEvent 컨트롤이벤트
 */
- (void)removeEventHandlersForControlEvent:(UIControlEvents)controlEvent;

@end