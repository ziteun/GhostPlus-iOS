//
//  GhostPlus.h
//  GhostPlus
//
//  Created by VANSTUDIO
//  Copyright (c) 2014년 GhostCorps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// Macro
#import <GhostPlus/GPMacro.h>

// Manager
#import <GhostPlus/GPApplicationManager.h>
#import <GhostPlus/GPCrashManager.h>
#import <GhostPlus/GPCryptoManager.h>
#import <GhostPlus/GPDebugManager.h>
#import <GhostPlus/GPDeviceManager.h> // required "AVFoundation", "AssetsLibrary"
#import <GhostPlus/GPFontManager.h>
#import <GhostPlus/GPNetManager.h>
#import <GhostPlus/GPNetManager+AFNetworking.h>
#import <GhostPlus/GPAirLogger.h>
#import <GhostPlus/GPWebViewManager.h>

// Custom UI
#import <GhostPlus/GPAlert.h>
#import <GhostPlus/GPAlertController.h>

// Category
#import <GhostPlus/Base64.h>
#import <GhostPlus/JSON.h>
#import <GhostPlus/UIControl+GPActionBlock.h>
#import <GhostPlus/UIImage+GPUtil.h>
#import <GhostPlus/UIScreen+GPUtil.h>
#import <GhostPlus/UIView+GPUtil.h>
#import <GhostPlus/UIViewController+GPUtil.h>
#import <GhostPlus/NSObject+GPPerformBlock.h>
#import <GhostPlus/NSString+GPUtil.h>
#import <GhostPlus/NSURL+GPUtil.h>

// Debug
#import <GhostPlus/GPLogger.h>
#import <GhostPlus/GPAirLogger.h>
#import <GhostPlus/GPLogViewController.h>

// Utils
#import <GhostPlus/KeychainItemWrapper.h>

// Library
#import <AFNetworking/AFNetworking.h>

// Constans
#define GHOSTPLUS_VERSION           @"2.07";
#define GHOSTPLUS_BUILD_VERSION     @"207";

/**
 GhostPlus 메인클래스
 */
@interface GhostPlus : NSObject

/** 프레임워크 초기화
 @param key 키
 */
+ (void)initializeWithKey:(NSString *)key;

/** 프레임워크 승인여부 */
+ (BOOL)authorized;

/** 프레임워크 버전 */
+ (NSString *)getVersion;

/** 프레임워크 빌드버전 */
+ (NSString *)getBuildVersion;

/** 프레임워크 디버깅툴 사용설정
 @param value flag
 */
+ (void)setUseDebuggingTool:(BOOL)value;

/** 프레임워크 디버깅틀 사용여부 */
+ (BOOL)useDebuggingTool;

/** 프레임워크 로깅 사용설정
 @param value flag
 */
+ (void)setUseLog:(BOOL)value;

/** 프레임워크 로깅 사용여부 */
+ (BOOL)useLog;

/** 프레임워크 에어로깅 사용설정
 @param value flag
 */
+ (void)setUseAirLog:(BOOL)value;

/** 프레임워크 에어로깅 사용여부 */
+ (BOOL)useAirLog;

/**
 준비 확인
 */
+ (void)checkPrepare;

@end
