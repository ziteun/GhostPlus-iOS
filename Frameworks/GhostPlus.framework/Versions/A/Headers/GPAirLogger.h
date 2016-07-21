//
//  GPAirLogger.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>
#import <GhostPlus/GPLogger.h>


#define GPAirLog(fmt, ...)		do{ [GPAirLogger logWithFlag:GPAirLoggerFlagVerbose file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ## __VA_ARGS__]; } while(0)
#define GPAirLogD(fmt, ...)		do{ [GPAirLogger logWithFlag:GPAirLoggerFlagDebug file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ## __VA_ARGS__]; } while(0)
#define GPAirLogI(fmt, ...)		do{ [GPAirLogger logWithFlag:GPAirLoggerFlagInfo file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ## __VA_ARGS__]; } while(0)
#define GPAirLogW(fmt, ...)		do{ [GPAirLogger logWithFlag:GPAirLoggerFlagWarning file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ## __VA_ARGS__]; } while(0)
#define GPAirLogE(fmt, ...)		do{ [GPAirLogger logWithFlag:GPAirLoggerFlagError file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ## __VA_ARGS__]; } while(0)
#define GPAirLogC(fmt, ...)		do{ [GPAirLogger logWithFlag:GPAirLoggerFlagCrash file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(@"" fmt), ## __VA_ARGS__]; } while(0)


typedef NS_OPTIONS(NSUInteger, GPAirLoggerFlag){
	GPAirLoggerFlagVerbose	= GPLogFlagVerbose,
	GPAirLoggerFlagDebug	= GPLogFlagDebug,
	GPAirLoggerFlagInfo		= GPLogFlagInfo,
	GPAirLoggerFlagWarning	= GPLogFlagWarning,
	GPAirLoggerFlagError	= GPLogFlagError,
	GPAirLoggerFlagCrash	= GPLogFlagCrash
};


@interface GPAirLogger : NSObject

+ (void)setDeviceUUID:(NSString *)uuid;
+ (void)logWithFlag:(GPAirLoggerFlag)flag file:(const char *)file function:(const char *)function line:(NSUInteger)line format:(NSString *)format, ...;

@end
