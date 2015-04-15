
@protocol NSCoding;
@interface UIImagePickerController : UINavigationController <NSCoding> {

    long long _sourceType;
    id _image;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _cropRect;
    @"NSArray" _mediaTypes;
    @"NSMutableDictionary" _properties;
    int _previousStatusBarStyle;
    BOOL _previousStatusBarHidden;
    {?="visible"b1"isCleaningUp"b1"savingOptions"b3"didRevertStatusBar"b1} _imagePickerFlags;
}
 + (BOOL) isSourceTypeAvailable:(long long)a;
 + (BOOL) _isMediaTypeAvailable:(id)aforSource:(long long)b;
 + (BOOL) isCameraDeviceAvailable:(long long)a;
 + (BOOL) _reviewCapturedItems;
 + (id) availableMediaTypesForSourceType:(long long)a;
 + (id) availableCaptureModesForCameraDevice:(long long)a;
 + (BOOL) isFlashAvailableForCameraDevice:(long long)a;

 - (void) dealloc;
 - (unsigned long long) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) _populateArchivedChildViewControllers:(id)a;
 - (void) viewWillUnload;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (BOOL) _isSupportedInterfaceOrientation:(long long)a;
 - ({CGSize=dd}) _adjustedContentSizeForPopover:({CGSize=dd})a;
 - (id) _valueForProperty:(id)a;
 - (long long) sourceType;
 - (void) _setAllowsImageEditing:(BOOL)a;
 - (BOOL) _allowsImageEditing;
 - (void) setCameraCaptureMode:(long long)a;
 - (void) _setupControllersForCurrentSourceType;
 - (void) _updateCameraCaptureMode;
 - (void) _setupControllersForCurrentMediaTypes;
 - (void) _setValue:(id)aforProperty:(id)b;
 - (void) _initializeProperties;
 - (BOOL) _sourceTypeIsCamera;
 - (id) _cameraViewController;
 - (BOOL) _isCameraCaptureModeValid:(long long)a;
 - (void) _removeAllChildren;
 - (void) setSourceType:(long long)a;
 - (id) _createInitialController;
 - (void) _autoDismiss;
 - (void) _imagePickerDidCancel;
 - (void) _imagePickerDidCompleteWithInfo:(id)a;
 - (id) _initWithSourceImageData:(id)acropRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) setMediaTypes:(id)a;
 - (id) mediaTypes;
 - (BOOL) _allowsMultipleSelection;
 - (void) _setAllowsMultipleSelection:(BOOL)a;
 - (BOOL) allowsImageEditing;
 - (void) setAllowsImageEditing:(BOOL)a;
 - (BOOL) allowsEditing;
 - (void) setAllowsEditing:(BOOL)a;
 - (double) videoMaximumDuration;
 - (void) setVideoMaximumDuration:(double)a;
 - (long long) videoQuality;
 - (void) setVideoQuality:(long long)a;
 - (void) _setProperties:(id)a;
 - (id) _properties;
 - (void) _setImagePickerSavingOptions:(unsigned long long)a;
 - (unsigned long long) _imagePickerSavingOptions;
 - (BOOL) showsCameraControls;
 - (void) setShowsCameraControls:(BOOL)a;
 - (id) cameraOverlayView;
 - (void) setCameraOverlayView:(id)a;
 - ({CGAffineTransform=dddddd}) cameraViewTransform;
 - (void) setCameraViewTransform:({CGAffineTransform=dddddd})a;
 - (void) takePicture;
 - (BOOL) startVideoCapture;
 - (void) stopVideoCapture;
 - (long long) cameraDevice;
 - (void) setCameraDevice:(long long)a;
 - (long long) cameraCaptureMode;
 - (long long) cameraFlashMode;
 - (void) setCameraFlashMode:(long long)a;
 - (BOOL) _didRevertStatusBar;
 - (void) _imagePickerDidCompleteWithInfoArray:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
