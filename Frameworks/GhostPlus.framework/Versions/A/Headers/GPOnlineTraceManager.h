//
//  GPOnlineTraceManager.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>

@interface GPOnlineTraceManager : NSObject

+ (GPOnlineTraceManager *)sharedManager;

- (void)trace:(NSString *)message;
- (void)error:(NSString *)message;
- (void)crash:(NSString *)message;

@end
