
@protocol NSCoding;
@interface UIImagePickerController : UINavigationController <NSCoding> {

    q _sourceType;
    id _image;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _cropRect;
    @"NSArray" _mediaTypes;
    @"NSMutableDictionary" _properties;
    i _previousStatusBarStyle;
    BOOL _previousStatusBarHidden;
    {?="visible"b1"isCleaningUp"b1"savingOptions"b3"didRevertStatusBar"b1} _imagePickerFlags;
}
 + (BOOL) isSourceTypeAvailable:(q)a;
 + (BOOL) _isMediaTypeAvailable:(id)aforSource:(q)b;
 + (BOOL) isCameraDeviceAvailable:(q)a;
 + (BOOL) _reviewCapturedItems;
 + (id) availableMediaTypesForSourceType:(q)a;
 + (id) availableCaptureModesForCameraDevice:(q)a;
 + (BOOL) isFlashAvailableForCameraDevice:(q)a;

 - (void) dealloc;
 - (Q) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) _populateArchivedChildViewControllers:(id)a;
 - (void) viewWillUnload;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (BOOL) _isSupportedInterfaceOrientation:(q)a;
 - ({CGSize=dd}) _adjustedContentSizeForPopover:({CGSize=dd})a;
 - (id) _valueForProperty:(id)a;
 - (q) sourceType;
 - (void) _setAllowsImageEditing:(BOOL)a;
 - (BOOL) _allowsImageEditing;
 - (void) setCameraCaptureMode:(q)a;
 - (void) _setupControllersForCurrentSourceType;
 - (void) _updateCameraCaptureMode;
 - (void) _setupControllersForCurrentMediaTypes;
 - (void) _setValue:(id)aforProperty:(id)b;
 - (void) _initializeProperties;
 - (BOOL) _sourceTypeIsCamera;
 - (id) _cameraViewController;
 - (BOOL) _isCameraCaptureModeValid:(q)a;
 - (void) _removeAllChildren;
 - (void) setSourceType:(q)a;
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
 - (d) videoMaximumDuration;
 - (void) setVideoMaximumDuration:(d)a;
 - (q) videoQuality;
 - (void) setVideoQuality:(q)a;
 - (void) _setProperties:(id)a;
 - (id) _properties;
 - (void) _setImagePickerSavingOptions:(Q)a;
 - (Q) _imagePickerSavingOptions;
 - (BOOL) showsCameraControls;
 - (void) setShowsCameraControls:(BOOL)a;
 - (id) cameraOverlayView;
 - (void) setCameraOverlayView:(id)a;
 - ({CGAffineTransform=dddddd}) cameraViewTransform;
 - (void) setCameraViewTransform:({CGAffineTransform=dddddd})a;
 - (void) takePicture;
 - (BOOL) startVideoCapture;
 - (void) stopVideoCapture;
 - (q) cameraDevice;
 - (void) setCameraDevice:(q)a;
 - (q) cameraCaptureMode;
 - (q) cameraFlashMode;
 - (void) setCameraFlashMode:(q)a;
 - (BOOL) _didRevertStatusBar;
 - (void) _imagePickerDidCompleteWithInfoArray:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
