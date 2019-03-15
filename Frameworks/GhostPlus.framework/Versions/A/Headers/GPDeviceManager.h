//
//  DeviceManager.h
//  Created by VANSTUDIO
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <Photos/Photos.h>

/**
 디바이스 매니저
 */
@interface GPDeviceManager : NSObject

/**
 싱글톤 객체
 */
+ (GPDeviceManager *)sharedManager;

/**
 정보출력
 */
- (void)printInfo;

/**
 탈옥 확인
 @return 탈옥 여부
 */
- (BOOL)isRooted;

/** 아이폰 체크 */
- (BOOL)isDeviceiPhone;
/** 아이패드 체크 */
- (BOOL)isDeviceiPad;
/** 레티나 2x 체크 */
- (BOOL)isDeviceRetina2x;
/** 레티나 3x 체크 */
- (BOOL)isDeviceRetina3x;
/** 런치이미지 이름 가져오기 */
- (NSString *)getLaunchImageName;
/** 디바이스 UUID */
- (NSString *)getUUID;
/** 디바이스 이름 */
- (NSString *)getName;
/** 디바이스 모델이름 */
- (NSString *)getModelName;
/** 디바이스 시스템이름 */
- (NSString *)getSystemName;
/** 디바이스 시스템버전 */
- (NSString *)getSystemVersion;
/** 디바이스 모바일네트워크코드 */
- (NSString *)getMobileNetworkCode;
/** 디바이스 국가코드 */
- (NSString *)getCountryCode;
/** 디바이스 현재언어 */
- (NSString *)getCurrentLanguage;

/** 카메라 권한 여부 */
- (BOOL)isCameraDenied NS_AVAILABLE_IOS(7_0);
/** 카메라 사용가능 여부 */
- (BOOL)isCameraRestricted NS_AVAILABLE_IOS(7_0);
/** 사진라이브러리 권한 여부 */
- (BOOL)isPhotoLibraryDenied NS_AVAILABLE_IOS(7_0);
/** 사진라이브러리 사용가능 여부 */
- (BOOL)isPhotoLibraryRestricted NS_AVAILABLE_IOS(7_0);
/** 카메라 사용가능 여부확인 및 얼럿표시
 @param deniedMessage 권한 없을때 메세지
 @param restrictedMessage 사용불가 일때 메세지
 @param okButtonTitle 확인버튼 타이틀
 */
- (BOOL)availableCameraWithDeniedMessage:(NSString *)deniedMessage restrictedMessage:(NSString *)restrictedMessage okButtonTitle:(NSString *)okButtonTitle NS_AVAILABLE_IOS(7_0);
/** 사진라이브러리 사용가능 여부확인 및 얼럿표시
 @param deniedMessage 권한 없을때 메세지
 @param restrictedMessage 사용불가 일때 메세지
 @param okButtonTitle 확인버튼 타이틀
 */
- (BOOL)availablePhotoLibraryWithDeniedMessage:(NSString *)deniedMessage restrictedMessage:(NSString *)restrictedMessage okButtonTitle:(NSString *)okButtonTitle NS_AVAILABLE_IOS(7_0);

@end
