//
//  UIView+GPUtil.h
//  Created by VANSTUDIO
//

#import <UIKit/UIKit.h>

@interface UIView (GPUtil)

- (void)setTop:(CGFloat)constant;
- (void)setBottom:(CGFloat)constant;
- (void)setLeft:(CGFloat)constant;
- (void)setRight:(CGFloat)constant;
- (void)setWidth:(CGFloat)constant;
- (void)setHeight:(CGFloat)constant;

- (void)addConstraintFillWithItem:(UIView *)item;
- (void)addConstraintWithItem:(UIView *)item frame:(CGRect)frame;

@end
