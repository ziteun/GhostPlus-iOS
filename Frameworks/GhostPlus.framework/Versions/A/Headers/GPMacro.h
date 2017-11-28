//
//  GPMacro.h
//  GhostPlus
//
//  Created by VANSTUDIO
//  Copyright (c) 2014년 GhostCorps. All rights reserved.
//

#ifndef GhostPlus_GHMacro_h
#define GhostPlus_GHMacro_h

// OS
#define IS_OS_6_OR_EARLIER	([[[UIDevice currentDevice] systemVersion] floatValue] < 7.0)
#define IS_OS_7_OR_EARLIER	([[[UIDevice currentDevice] systemVersion] floatValue] < 8.0)
#define IS_OS_8_OR_EARLIER	([[[UIDevice currentDevice] systemVersion] floatValue] < 9.0)
#define IS_OS_9_OR_EARLIER	([[[UIDevice currentDevice] systemVersion] floatValue] < 10.0)
#define IS_OS_7_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define IS_OS_8_OR_LATER	([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define IS_OS_9_OR_LATER	([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)
#define IS_OS_10_OR_LATER	([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)
#define IS_OS_11_OR_LATER	([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0)
#define IS_OS_12_OR_LATER	([[[UIDevice currentDevice] systemVersion] floatValue] >= 12.0)
#define IS_OS_13_OR_LATER	([[[UIDevice currentDevice] systemVersion] floatValue] >= 13.0)
#define IS_OS_14_OR_LATER	([[[UIDevice currentDevice] systemVersion] floatValue] >= 14.0)
#define IS_OS_15_OR_LATER	([[[UIDevice currentDevice] systemVersion] floatValue] >= 15.0)

// Log
#define PrintBool(x) (((x) == YES) ? @"YES" : @"NO")
#define PrintRect(x)			NSStringFromCGRect(x)
#define PrintPoint(x)			NSStringFromCGPoint(x)
#define PrintSize(x)			NSStringFromCGSize(x)
#define PrintRange(x)			NSStringFromRange(x)
#define PrintUIEdgeInsets(x)	NSStringFromUIEdgeInsets(x)
#define PrintUIOffset(x)		NSStringFromUIOffset(x)

// Math
#define degreeToRadians(x) (M_PI * x / 180.0)
#define radiansToDegree(x) (180.0 * x / M_PI)

// Color
#define RGB(r, g, b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define UIColorFromHexString(hexString)	[UIColor colorFromHexString:hexString]

// Encoding
#define NSEUCKRStringEncoding	-2147481280

// Util
#define NotiPost(name, obj, userinfo)		[[NSNotificationCenter defaultCenter] postNotificationName:name object:obj userInfo:userinfo]

// Dispatch
#define gp_dispatch_main_sync_safe(block)\
	if ([NSThread isMainThread]) {\
		block();\
	} else {\
		dispatch_sync(dispatch_get_main_queue(), block);\
	}

#define gp_dispatch_main_async_safe(block)\
	if ([NSThread isMainThread]) {\
		block();\
	} else {\
		dispatch_async(dispatch_get_main_queue(), block);\
	}

// Google Analytics
#define GAI_INSTALL()\
	NSError *configureError;\
	[[GGLContext sharedInstance] configureWithError:&configureError];\
	NSAssert(!configureError, @"Error configuring Google services: %@", configureError);\
	[GAI sharedInstance].trackUncaughtExceptions = YES;

#define GAI_LOGLEVEL(__LOGLEVEL__)\
	[GAI sharedInstance].logger.logLevel = __LOGLEVEL__;

#define GAI_TRACK_SCREEN(__SCREEN__)\
	id<GAITracker> tracker = [[GAI sharedInstance] defaultTracker];\
	[tracker set:kGAIScreenName value:__SCREEN__];\
	[tracker send:[[GAIDictionaryBuilder createScreenView] build]];

#define GAI_TRACK_EVENT(__CATEGORY__, __ACTION__, __LABEL__, __VALUE__)\
	[[[GAI sharedInstance] defaultTracker] send:[[GAIDictionaryBuilder createEventWithCategory:__CATEGORY__ action:__ACTION__ label:__LABEL__ value:__VALUE__] build]];

#endif
