//
//  GPNetManager+AFNetworking.h
//  GhostPlus
//
//  Created by VANSTUDIO on 2016. 7. 21..
//  Copyright © 2016년 GhostCorps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GPNetManager (AFNetworking)

@end


@interface GPAFHTTPSessionOperation : NSOperation
@property (nonatomic, strong) NSURLSessionTask *task;
- (void)completeOperation;
@end