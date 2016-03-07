//
//  GPMacro.h
//  GhostPlus
//
//  Created by VANSTUDIO
//  Copyright (c) 2014년 GhostCorps. All rights reserved.
//

#ifndef GhostPlus_GHMacro_h
#define GhostPlus_GHMacro_h

// Log
#define GPLog(fmt, ...) if ([GhostPlus useLog]) NSLog((@"%s[Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define GPOnlineTrace(fmt, ...) [[GPOnlineTraceManager sharedManager] trace:[NSString stringWithFormat:fmt, ##__VA_ARGS__]];
#define GPOnlineError(fmt, ...) [[GPOnlineTraceManager sharedManager] error:[NSString stringWithFormat:fmt, ##__VA_ARGS__]];
#define GPOnlineCrash(fmt, ...) [[GPOnlineTraceManager sharedManager] crash:[NSString stringWithFormat:fmt, ##__VA_ARGS__]];

// OS
#define IS_OS_6_OR_EARLIER	([[[UIDevice currentDevice] systemVersion] floatValue] < 7.0)
#define IS_OS_7_OR_EARLIER	([[[UIDevice currentDevice] systemVersion] floatValue] < 8.0)
#define IS_OS_8_OR_EARLIER	([[[UIDevice currentDevice] systemVersion] floatValue] < 9.0)
#define IS_OS_9_OR_EARLIER	([[[UIDevice currentDevice] systemVersion] floatValue] < 10.0)
#define IS_OS_7_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define IS_OS_8_OR_LATER	([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define IS_OS_9_OR_LATER	([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)
#define IS_OS_10_OR_LATER	([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)

// Log
#define PrintBool(x) (((x) == YES) ? @"YES" : @"NO")
#define PrintRect(x)	NSStringFromCGRect(x)
#define PrintPoint(x)	NSStringFromCGPoint(x)
#define PrintSize(x)	NSStringFromCGSize(x)

// Math
#define degreeToRadians(x) (M_PI * x / 180.0)
#define radiansToDegree(x) (180.0 * x / M_PI)

// Color
#define RGB(r, g, b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

// Encoding
#define NSEUCKRStringEncoding	-2147481280

// Util
#define NotiPost(name, obj, userinfo)		[[NSNotificationCenter defaultCenter] postNotificationName:name object:obj userInfo:userinfo]

#endif
