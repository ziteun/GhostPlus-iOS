//
//  NSString+GPUtil.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>

/**
 NSString+GPUtil
 */
@interface NSString (GPUtil)

/**
 문자열 트림
 */
- (NSString *)trim;

/**
 URL 인코딩
 */
- (NSString *)URLEncode;

/**
 URL 디코딩
 */
- (NSString *)URLDecode;

@end
