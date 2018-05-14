//
//  NetManager.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

#define METHOD_POST	@"POST"
#define METHOD_GET	@"GET"

@class GPMultipartFormData;

/**
 네트워크 통신 매니저
 */
@interface GPNetManager : NSObject

/**
 싱글톤 객체
 */
+ (GPNetManager *)sharedManager;

/**
 준비 확인
 */
- (BOOL)checkPrepare;

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

/** HTTP 프록시 설정
 @param host	프록시 호스트
 @param port	프록시 포트
 */
- (void)setHTTPProxyWithHost:(NSString *)host port:(NSNumber *)port;

/** 네트워크통신 요청 (String)
 @param url URL
 @param headers 헤더 (기본은 nil)
 @param parameters 변수 (기본은 nil)
 @param method 메서드
 @param encoding 인코딩
 @param success 네트워크통신 성공시 핸들러
 @param failure 네트워크통신 실패시 핸들러
 */
- (void)requestStringWithURL:(NSString *)url headers:(NSDictionary *)headers parameters:(NSDictionary *)parameters method:(NSString *)method encoding:(NSInteger)encoding success:(void (^)(NSURLSessionDataTask *task, NSString *responseString))success failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

/** 네트워크통신 요청 (String)
 @param url URL
 @param headers 헤더 (기본은 nil)
 @param parameters 변수 (기본은 nil)
 @param multipartFormData multipart form 데이터
 @param method 메서드
 @param encoding 인코딩
 @param uploadProgress 네트워크통신 업로드 프로그레스 핸들러
 @param downloadProgress 네트워크통신 다운로드 프로그레스 핸들러
 @param success 네트워크통신 성공시 핸들러
 @param failure 네트워크통신 실패시 핸들러
 */
- (void)requestStringWithURL:(NSString *)url headers:(NSDictionary *)headers parameters:(NSDictionary *)parameters multipartFormData:(NSArray<GPMultipartFormData *> *)multipartFormData method:(NSString *)method encoding:(NSInteger)encoding uploadProgress:(void (^)(NSProgress *progress))uploadProgress downloadProgress:(void (^)(NSProgress *progress))downloadProgress success:(void (^)(NSURLSessionDataTask *task, NSString *responseString))success failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

/** 네트워크통신 요청 (JSON)
 @param url URL
 @param headers 헤더 (기본은 nil)
 @param parameters 변수 (기본은 nil)
 @param method 메서드
 @param encoding 인코딩
 @param success 네트워크통신 성공시 핸들러
 @param failure 네트워크통신 실패시 핸들러
 */
- (void)requestJSONWithURL:(NSString *)url headers:(NSDictionary *)headers parameters:(NSDictionary *)parameters method:(NSString *)method encoding:(NSInteger)encoding success:(void (^)(NSURLSessionDataTask *task, NSDictionary *json))success failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

/** 네트워크통신 요청 (JSON)
 @param url URL
 @param headers 헤더 (기본은 nil)
 @param parameters 변수 (기본은 nil)
 @param method 메서드
 @param encoding 인코딩
 @param success 네트워크통신 성공시 핸들러
 @param failure 네트워크통신 실패시 핸들러
 */
- (void)requestJSONWithURL:(NSString *)url headers:(NSDictionary *)headers parameters:(NSDictionary *)parameters method:(NSString *)method encoding:(NSInteger)encoding useJSONRequestSerializer:(BOOL)useJSONRequestSerializer success:(void (^)(NSURLSessionDataTask *task, NSDictionary *json))success failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

// TODO: 개발중
//- (void)downloadFileWithURL:(NSString *)url;

@end


@interface GPMultipartFormData : NSObject
@property (nonatomic, strong) NSData *data;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *fileName;
@property (nonatomic, strong) NSString *mimeType;
- (instancetype)initWithData:(NSData *)data name:(NSString *)name fileName:(NSString *)fileName mimeType:(NSString *)mimeType;
@end
