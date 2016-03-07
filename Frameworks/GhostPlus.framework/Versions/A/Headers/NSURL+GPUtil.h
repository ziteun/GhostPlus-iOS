//
//  NSURL+GPUtil.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>

/**
 NSURL+GPUtil
 */
@interface NSURL (GPUtil)

/**
 정보 출력
 */
- (void)printInfo;

/**
 query 사전형 데이터
 */
- (NSDictionary *)queryItems;

@end
