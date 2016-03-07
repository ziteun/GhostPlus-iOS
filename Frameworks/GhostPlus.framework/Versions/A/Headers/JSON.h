//
//  JSON.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>

@interface NSString (JSON)
- (id)JSONValue;
@end

@interface NSData (JSON)
- (id)JSONValue;
@end

@interface NSDictionary (JSON)
- (NSString *)JSONString;
- (NSString *)JSONStringWithPrettyPrinted;
@end

@interface NSArray (JSON)
- (NSString *)JSONString;
- (NSString *)JSONStringWithPrettyPrinted;
@end