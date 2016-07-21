//
//  UIView+GPUtil.h
//  Created by VANSTUDIO
//

#import <UIKit/UIKit.h>

@interface UIView (GPUtil)

/**
 set x
 @param x x좌표
 */
- (void)setX:(CGFloat)x;
/**
 set y
 @param y y좌표
 */
- (void)setY:(CGFloat)y;
/**
 set width
 @param width 가로크기
 */
- (void)setWidth:(CGFloat)width;
/**
 set height
 @param height 세로크기
 */
- (void)setHeight:(CGFloat)height;
/**
 set origin
 @param point 위치
 */
- (void)setOrigin:(CGPoint)point;
/**
 set size
 @param size 크기
 */
- (void)setSize:(CGSize)size;
/**
 스냅샷 가져오기
 */
- (UIImage *)takeSnapshot;

@end
