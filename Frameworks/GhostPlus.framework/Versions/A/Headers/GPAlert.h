//
//  GPAlert.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>

/**
 GPAlert
 얼럿 모듈
 */
@interface GPAlert : NSObject

/**
 얼럿 보이기
 @param title 타이틀
 @param message 메세지
 @param cancelButtonTitle 취소 버튼 타이틀
 */
+ (void)showAlertWithTitle:(NSString *)title message:(NSString *)message cancelButtonTitle:(NSString *)cancelButtonTitle;

/**
 얼럿 보이기
 @param title 타이틀
 @param message 메세지
 @param delegate 델리게이트
 @param tag 태그
 @param cancelButtonTitle 취소 버튼 타이틀
 @param otherButtonTitle1 다른 버튼 첫번째 타이틀
 @param otherButtonTitle2 다른 버튼 두번째 타이틀
 */
+ (void)showAlertWithTitle:(NSString *)title message:(NSString *)message delegate:(id)delegate tag:(NSUInteger)tag cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitle1:(NSString *)otherButtonTitle1 otherButtonTitle2:(NSString *)otherButtonTitle2;

@end
