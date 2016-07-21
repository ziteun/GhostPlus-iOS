//
//  GPWebViewManager.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>

/**
 웹뷰 매니저
 */
@interface GPWebViewManager : NSObject

/**
 싱글톤 객체
 */
+ (GPWebViewManager *)sharedManager;

/**
 준비 확인
 */
- (BOOL)checkPrepare;

/**
 유저에이전트
 */
- (NSString *)userAgent;

/**
 유저에이전트 설정
 @param str 유저에이전트
 */
- (void)setUserAgent:(NSString *)str;;

/**
 유저에이전트 추가
 @param str 추가 할 유저에이전트
 */
- (void)userAgentAppendString:(NSString *)str;

/**
 쿠키 초기화
 */
- (void)initCookie;

/**
 쿠키 저장
 */
- (void)storeCookie;

/**
 쿠키 복원
 */
- (void)restoreCookie;

/**
 쿠키 출력
 @param url URL
 */
- (void)printCookieWithURL:(NSURL *)url;

/**
 쿠키 가져오기
 @param key 키
 @param url URL
 */
- (NSString *)getCookieWithKey:(NSString *)key URL:(NSURL *)url;

/**
 쿠키 설정하기
 @param key 키
 @param value 값
 @param host 호스트
 */
- (void)setCookieWithKey:(NSString *)key value:(NSString *)value host:(NSString *)host;

/**
 쿠키 설정하기
 @param key 키
 @param value 값
 @param host 호스트
 @param path 경로
 @param version 버전
 @param expireDate 기한날짜
 */
- (void)setCookieWithKey:(NSString *)key value:(NSString *)value host:(NSString *)host path:(NSString *)path version:(NSString *)version expireDate:(NSDate *)expireDate;

/**
 쿠키 삭제하기
 @param key 키
 @param url URL
 */
- (void)deleteCookieWithKey:(NSString *)key URL:(NSURL *)url;

/**
 캐시 비활성화
 */
- (void)setCacheDisable;

/**
 캐시 설정
 @param memoryCapacity 할당할 메모리크기
 @param diskCapacity 할당할 디스크크기
 */
- (void)setCacheWithMemoryCapacity:(NSUInteger)memoryCapacity diskCapacity:(NSUInteger)diskCapacity;

/**
 웹뷰 리퀘스트 결제스킴 리뷰
 @param request 리퀘스트
 @param navigationType 네비게이션 타입
 @return 해당되는 스킴이 없으면 'YES'
 */
- (BOOL)reviewForPaymentWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;

/**
 웹뷰 리퀘스트 앱스토어스킴 리뷰
 @param request 리퀘스트
 @param navigationType 네비게이션 타입
 @return 해당되는 스킴이 없으면 'YES'
 */
- (BOOL)reviewForAppstoreWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;

/**
 웹뷰 리퀘스트 전화걸기스킴 리뷰
 @param request 리퀘스트
 @param navigationType 네비게이션 타입
 @return 해당되는 스킴이 없으면 'YES'
 */
- (BOOL)reviewForTelWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;

/**
 웹뷰 리퀘스트 이메일스킴 리뷰
 @param request 리퀘스트
 @param navigationType 네비게이션 타입
 @return 해당되는 스킴이 없으면 'YES'
 */
- (BOOL)reviewForEmailWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;

/**
 웹뷰 리퀘스트 카카오링크스킴 리뷰
 @param request 리퀘스트
 @param navigationType 네비게이션 타입
 @return 해당되는 스킴이 없으면 'YES'
 */
//- (BOOL)reviewForKakaoLinkWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;

/**
 웹뷰 롱프레스 제스쳐 비활성화
 */
- (void)disableLongPressGesturesWithWebView:(UIWebView *)webview;

@end
