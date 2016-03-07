//
//  GPApplicationManager.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>

/**
 어플리케이션 매니저
 */
@interface GPApplicationManager : NSObject

/**
 싱글톤 객체
 */
+ (GPApplicationManager *)sharedManager;

/** 어플리케이션 식별자 (CFBundleIdentifier) */
- (NSString *)getApplicationIdentifier;

/** 어플리케이션 이름 (CFBundleName) */
- (NSString *)getApplicationName;

/** 어플리케이션 버전 (CFBundleShortVersionString) */
- (NSString *)getApplicationVersion;

/** 어플리케이션 설치 날짜 */
- (NSDate *)getApplicationInstallDate;

/** 어플리케이션 업데이트 날짜 */
- (NSDate *)getApplicationUpdateDate;

/** 어플리케이션 디버깅모드 체크 */
- (BOOL)isDebugMode;

/** info.plist 스킴에 등록되어 있는 스킴인지 체크
 @param scheme 스킴
 */
- (BOOL)isAppScheme:(NSString *)scheme;

/** 카카오링크 URL 체크
 @param url URL
 */
- (BOOL)isKakaoLinkURL:(NSURL *)url;

@end
