
@interface UIVideoEditorController : UINavigationController {

    int _previousStatusBarStyle;
    NSMutableDictionary* _properties;
    {?="visible"b1"isCleaningUp"b1"didRevertStatusBar"b1} _flags;
}
 + (BOOL) canEditVideoAtPath:(id)a;

 - (void) viewWillAppear:(BOOL)a;
 - (void) viewWillUnload;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (BOOL) _isSupportedInterfaceOrientation:(long long)a;
 - (id) _valueForProperty:(id)a;
 - (void) _setValue:(id)aforProperty:(id)b;
 - (void) _initializeProperties;
 - (void) _removeAllChildren;
 - (id) _createInitialController;
 - (void) _autoDismiss;
 - (double) videoMaximumDuration;
 - (void) setVideoMaximumDuration:(double)a;
 - (long long) videoQuality;
 - (void) setVideoQuality:(long long)a;
 - (void) _setProperties:(id)a;
 - (id) _properties;
 - (BOOL) _didRevertStatusBar;
 - (void) _setupControllers;
 - (void) editVideoViewControllerDidCancel:(id)a;
 - (id) _videoURL;
 - (void) _setVideoURL:(id)a;
 - (void) editVideoViewController:(id)adidTrimVideoWithOptions:(id)b;
 - (void) editVideoViewController:(id)adidFailWithError:(id)b;
 - (id) videoPath;
 - (void) setVideoPath:(id)a;
 - (id) init;


@end
