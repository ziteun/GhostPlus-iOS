//
//  UIImage+GPUtil.h
//  Created by VANSTUDIO
//

#import <UIKit/UIKit.h>

/**
 UIImage+GPUtil
 */
@interface UIImage (GPUtil)

/**
 백그라운드에서 이미지 불러오기
 @param	url			이미지URL
 @param complete	작업완료시 콜백
 */
+ (void)loadImageInBackgroundWithURL:(NSURL *)url complete:(void (^)(UIImage *image))complete;

/**
 백그라운드에서 이미지 사이즈 불러오기
 @param	url			이미지URL
 @param complete	작업완료시 콜백
 */
+ (void)loadImageSizeInBackgroundWithURL:(NSURL *)url complete:(void (^)(BOOL success, CGSize imageSize))complete;

/**
 이미지 방향을 세로 기준으로
 */
- (UIImage *)imageByNormalizingOrientation;

/**
 영역으로 이미지 가져오기
 @param rect 영역
 */
- (UIImage *)imageAtRect:(CGRect)rect;

/**
 이미지 스케일 비례 재조정
 @param targetSize 타겟사이즈
 */
- (UIImage *)imageByScalingProportionallyToMinimumSize:(CGSize)targetSize;

/**
 이미지 스케일 비례 재조정
 @param targetSize 타겟사이즈
 */
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;

/**
 이미지 스케일 재조정
 @param targetSize 타겟사이즈
 */
- (UIImage *)imageByScalingToSize:(CGSize)targetSize;

/**
 이미지 회전 (radian)
 @param radians 라디안
 */
- (UIImage *)imageByRotatedRadians:(CGFloat)radians;

/**
 이미지 회전 (degree)
 @param degrees 각도
 */
- (UIImage *)imageByRotatedDegrees:(CGFloat)degrees;

/**
 이미지 리사이즈
 @param dstSize 사이즈
 */
- (UIImage *)imageByResizedToSize:(CGSize)dstSize;

/**
 이미지 바운딩에 맞게 리사이즈
 @param boundingSize 사이즈
 @param scale 바운딩 안에 꽉차게 할 것인지
 */
- (UIImage *)imageByResizedToFitInSize:(CGSize)boundingSize scaleIfSmaller:(BOOL)scale;
@end
