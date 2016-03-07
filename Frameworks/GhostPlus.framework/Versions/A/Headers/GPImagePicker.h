//
//  GPImagePicker.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>

/**
 GPImagePicker
 카메라,앨범 이미지 선택 모듈
 */
@interface GPImagePicker : NSObject <UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

/** 델리게이트 */
@property (atomic, assign) id delegate;
/** 취소버튼 타이틀 */
@property (nonatomic, strong) NSString *cancelButtonTitle;
/** 확인버튼 타이틀 */
@property (nonatomic, strong) NSString *okButtonTitle;
/** 카메라버튼 타이틀 */
@property (nonatomic, strong) NSString *chooseCameraButtonTitle;
/** 앨범버튼 타이틀 */
@property (nonatomic, strong) NSString *chooseAlbumButtonTitle;
/** 카메라의 권한이 없을때 메세지 */
@property (nonatomic, strong) NSString *cameraDeniedMessage;
/** 카메라를 사용할 수 없는 디바이스 일때 메세지 */
@property (nonatomic, strong) NSString *cameraRestrictedMessage;
/** 사진라이브러리의 권한이 없을때 메세지 */
@property (nonatomic, strong) NSString *photoLibraryDeniedMessage;
/** 사진라이브러리를 사용할 수 없는 디바이스 일때 메세지 */
@property (nonatomic, strong) NSString *photoLibraryRestrictedMessage;
/** 편집 사용여부 */
@property (nonatomic, assign) BOOL allowsEditing;

/**
 해당 뷰컨트롤러에서 보이기
 @param viewController 해당 뷰컨트롤러
 */
- (void)showInViewController:(UIViewController *)viewController;

@end


/**
 GPImagePickerDelegate
 */
@protocol GPImagePickerDelegate <NSObject>
@required
/**
 이미지 선택시
 @param picker 픽커
 @param image 선택된 이미지
 */
- (void)GPImagePicker:(GPImagePicker *)picker didFinishPickingImage:(UIImage *)image;
@optional
@end