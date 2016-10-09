//
//  GPLogger.h
//  GhostPlus
//
//  Created by VANSTUDIO on 2016. 3. 26..
//  Copyright © 2016년 GhostCorps. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GPConsoleColor;


#define GPLog(fmt, ...)		do{ if ([GhostPlus useLog]) [GPLogger logWithFlag:GPLogFlagVerbose file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ##__VA_ARGS__]; } while(0)
#define GPLogD(fmt, ...)	do{ if ([GhostPlus useLog]) [GPLogger logWithFlag:GPLogFlagDebug file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ##__VA_ARGS__]; } while(0)
#define GPLogI(fmt, ...)	do{ if ([GhostPlus useLog]) [GPLogger logWithFlag:GPLogFlagInfo file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ##__VA_ARGS__]; } while(0)
#define GPLogW(fmt, ...)	do{ if ([GhostPlus useLog]) [GPLogger logWithFlag:GPLogFlagWarning file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ##__VA_ARGS__]; } while(0)
#define GPLogE(fmt, ...)	do{ if ([GhostPlus useLog]) [GPLogger logWithFlag:GPLogFlagError file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ##__VA_ARGS__]; } while(0)
#define GPLogC(fmt, ...)	do{ if ([GhostPlus useLog]) [GPLogger logWithFlag:GPLogFlagCrash file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ##__VA_ARGS__]; } while(0)


#define GPLogBackgroundColor UIColorFromRGB(0x222222)
#define GPLogTextColorV	[UIColor lightTextColor]
#define GPLogTextColorD	UIColorFromRGB(0xA2D92B)
#define GPLogTextColorI	UIColorFromRGB(0xA37EF2)
#define GPLogTextColorW	[UIColor orangeColor]
#define GPLogTextColorE	[UIColor redColor]
#define GPLogTextColorC	[UIColor redColor]


typedef NS_OPTIONS(NSUInteger, GPLogFlag){
	GPLogFlagVerbose	= 0,
	GPLogFlagDebug		= 1 << 0,
	GPLogFlagInfo		= 1 << 1,
	GPLogFlagWarning	= 1 << 2,
	GPLogFlagError		= 1 << 3,
	GPLogFlagCrash		= 1 << 4
};


static NSDateFormatter *consoleDateFormatter;
static GPConsoleColor *consoleBackgroundColor;
static GPConsoleColor *consoleTextColorV;
static GPConsoleColor *consoleTextColorD;
static GPConsoleColor *consoleTextColorI;
static GPConsoleColor *consoleTextColorW;
static GPConsoleColor *consoleTextColorE;
static GPConsoleColor *consoleTextColorC;


@interface GPLogger : NSObject
+ (void)setColorsEnabled:(BOOL)enable;
+ (void)setUseTTY:(BOOL)value;
+ (void)setUseASL:(BOOL)value;
+ (void)logWithFlag:(GPLogFlag)flag file:(const char *)file function:(const char *)function line:(NSUInteger)line format:(NSString *)format, ...;
+ (void)logWithFlag:(GPLogFlag)flag file:(const char *)file function:(const char *)function line:(NSUInteger)line prefix:(NSString *)prefix message:(NSString *)message;
@end


@interface GPConsoleColor : NSObject
@property (nonatomic) NSUInteger red;
@property (nonatomic) NSUInteger green;
@property (nonatomic) NSUInteger blue;
@property (nonatomic) NSUInteger alpha;
- (instancetype)initWithColor:(UIColor *)color;
- (NSString *)getLogColorFormat;
@end
