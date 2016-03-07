//
//  GPCryptoManager.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>

/**
 암호화 매니저
 */
@interface GPCryptoManager : NSObject

/**
 싱글톤 객체
 */
+ (GPCryptoManager *)sharedManager;

/**
 AES256 암호화
 @param data 데이터
 @param key 암호화 KEY
 @param iv 암호화 IV
 @return 암호화된 데이터
 */
- (NSData *)AES256EncryptWithData:(NSData *)data key:(NSString *)key iv:(NSString *)iv;

/**
 AES256 복호화
 @param data 데이터
 @param key 암호화 KEY
 @param iv 암호화 IV
 @return 암호화된 데이터
 */
- (NSData *)AES256DecryptWithData:(NSData *)data key:(NSString *)key iv:(NSString *)iv;

/**
 AES256 암호화
 @param str 문자열데이터
 @param key 암호화 KEY
 @param iv 암호화 IV
 @return 암호화된 문자열데이터
 */
- (NSString *)AES256EncryptWithString:(NSString *)str key:(NSString *)key iv:(NSString *)iv;

/**
 AES256 복호화
 @param str 문자열데이터
 @param key 암호화 KEY
 @param iv 암호화 IV
 @return 암호화된 문자열데이터
 */
- (NSString *)AES256DecryptWithString:(NSString *)str key:(NSString *)key iv:(NSString *)iv;

/**
 AES128 암호화
 @param data 데이터
 @param key 암호화 KEY
 @param iv 암호화 IV
 @return 암호화된 데이터
 */
- (NSData *)AES128EncryptWithData:(NSData *)data key:(NSString *)key iv:(NSString *)iv;

/**
 AES128 복호화
 @param data 데이터
 @param key 암호화 KEY
 @param iv 암호화 IV
 @return 암호화된 데이터
 */
- (NSData *)AES128DecryptWithData:(NSData *)data key:(NSString *)key iv:(NSString *)iv;

/**
 AES128 암호화
 @param str 문자열데이터
 @param key 암호화 KEY
 @param iv 암호화 IV
 @return 암호화된 문자열데이터
 */
- (NSString *)AES128EncryptWithString:(NSString *)str key:(NSString *)key iv:(NSString *)iv;

/**
 AES128 복호화
 @param str 문자열데이터
 @param key 암호화 KEY
 @param iv 암호화 IV
 @return 암호화된 문자열데이터
 */
- (NSString *)AES128DecryptWithString:(NSString *)str key:(NSString *)key iv:(NSString *)iv;

@end
