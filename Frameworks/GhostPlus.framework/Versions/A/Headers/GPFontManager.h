//
//  GPFontManager.h
//  Created by VANSTUDIO
//

#import <UIKit/UIKit.h>

/**
 폰트 매니저
 */
@interface GPFontManager : NSObject

/**
 싱글톤 객체
 */
+ (GPFontManager *)sharedManager;

/** 모든 UILabel 폰트 설정
 @param fontName 폰트이름
 */
- (void)setUILabelDefaultFontName:(NSString *)fontName;

/** 모든 UIButton 폰트 설정
 @param fontName 폰트이름
 */
- (void)setUIButtonDefaultFontName:(NSString *)fontName;

/** 모든 UITextView 폰트 설정
 @param fontName 폰트이름
 */
- (void)setUITextViewDefaultFontName:(NSString *)fontName;

/** 모든 UITextField 폰트 설정
 @param fontName 폰트이름
 */
- (void)setUITextFieldDefaultFontName:(NSString *)fontName;

@end
