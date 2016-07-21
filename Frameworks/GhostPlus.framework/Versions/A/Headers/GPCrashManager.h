//
//  GPCrashManager.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>

/**
 크래쉬 매니저
 */
@interface GPCrashManager : NSObject

/**
 싱글톤 객체
 */
+ (GPCrashManager *)sharedManager;

/** 설치 */
- (void)install;

/** 강제로 크래쉬 (테스트용) */
- (void)crash;

@end
