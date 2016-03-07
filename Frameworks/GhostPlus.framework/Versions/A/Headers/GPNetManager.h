//
//  NetManager.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

#define METHOD_POST	@"POST"
#define METHOD_GET	@"GET"

/**
 네트워크 통신 매니저
 */
@interface GPNetManager : NSObject

/**
 싱글톤 객체
 */
+ (GPNetManager *)sharedManager;

/**
 네트워크상태 모니터링 시작
 */
- (void)startReachabilityMonitoring;

/**
 네트워크상태 모니터링 정지
 */
- (void)stopReachabilityMonitoring;

/**
 네트워크상태 변경시
 @param block 핸들러
 */
- (void)setReachabilityStatusChangeBlock:(void (^)(void))block;

/** 네트워크 사용가능 여부 */
- (BOOL)isReachable;

/** 네트워크 WAN 사용가능 여부 */
- (BOOL)isReachableViaWWAN;

/** 네트워크 WiFi 사용가능 여부 */
- (BOOL)isReachableViaWiFi;

/** 네트워크 상태 */
- (NSString *)reachabilityStatus;

/** 네트워크통신 타임아웃 설정
 @param timeoutInterval 타임아웃(초)
 */
- (void)setRequestTimeoutInterval:(NSTimeInterval)timeoutInterval;

/** 네트워크통신 유저에이전트 설정
 @param userAgent 유저에이전트
 */
- (void)setUserAgent:(NSString *)userAgent;

/** 네트워크통신 헤더 설정
 @param aHTTPHeaderField 헤더필드
 @param value 값
 */
- (void)setHTTPHeaderField:(NSString *)aHTTPHeaderField value:(NSString *)value;

/** 확인할 수 없는 인증서 허용하기
 @param allow 허용여부
 */
- (void)setAllowInvalidCertificates:(BOOL)allow;

/** 네트워크통신 요청 (JSON)
 @param url URL
 @param parameters 변수
 @param method 메서드
 @param encoding 인코딩
 @param success 네트워크통신 성공시 핸들러
 @param failure 네트워크통신 실패시 핸들러
 */
- (void)requestJSONWithURL:(NSString *)url parameters:(NSDictionary *)parameters method:(NSString *)method encoding:(NSInteger)encoding success:(void (^)(NSDictionary *json))success failure:(void (^)(void))failure;

/** 네트워크통신 요청 (HTML)
 @param url URL
 @param parameters 변수
 @param method 메서드
 @param encoding 인코딩
 @param success 네트워크통신 성공시 핸들러
 @param failure 네트워크통신 실패시 핸들러
 */
- (void)requestHTMLWithURL:(NSString *)url parameters:(NSDictionary *)parameters method:(NSString *)method encoding:(NSInteger)encoding success:(void (^)(NSString *html))success failure:(void (^)(void))failure;

// 테스트중
- (void)downloadFileWithURL:(NSString *)url;

@end