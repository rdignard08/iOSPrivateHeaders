
@protocol UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate;
@interface UIWebFileUploadPanel : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate> {

    @"UIAlertController" _selectPickerTypeSheet;
    @"UIImagePickerController" _imagePicker;
    @"UIViewController" _presentationViewController;
    @"UIPopoverController" _presentationPopover;
    BOOL _documentViewPresentedViewController;
    {CGPoint="x"d"y"d} _interactionPoint;
    @"DOMNode" _interactionElement;
    BOOL _allowMultipleFiles;
    BOOL _isUsingCamera;
    @"NSArray" _mimeTypes;
    @"UIWebDocumentView" _documentView;
    @"NSObject<WebOpenPanelResultListener>" _resultListener;
    @"<UIWebFileUploadPanelDelegate>" _delegate;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) dismiss;
 - (id) initWithResultListener:(id)amimeTypes:(id)ballowMultipleFiles:(BOOL)cdocumentView:(id)d;
 - (void) present;
 - (void) popoverControllerDidDismissPopover:(id)a;
 - (void) imagePickerControllerDidCancel:(id)a;
 - (void) imagePickerController:(id)adidFinishPickingMediaWithInfo:(id)b;
 - (void) imagePickerController:(id)adidFinishPickingMultipleMediaWithInfo:(id)b;
 - (void) setMimeTypes:(id)a;
 - (void) setResultListener:(id)a;
 - (void) setAllowMultipleFiles:(BOOL)a;
 - (void) setIsUsingCamera:(BOOL)a;
 - (void) _dispatchDidDismiss;
 - (id) mimeTypes;
 - (BOOL) _string:(id)ahasPrefixCaseInsensitive:(id)b;
 - (id) _mediaTypesForPickerSourceType:(q)a;
 - (id) _photoPickerWithSourceType:(q)a;
 - (void) _presentPopoverWithContentViewController:(id)aanimated:(BOOL)b;
 - (void) _presentFullscreenViewController:(id)aanimated:(BOOL)b;
 - (void) _cancel;
 - (void) _showPhotoPickerWithSourceType:(q)a;
 - (void) _dismissDisplayAnimated:(BOOL)a;
 - (void) _showMediaSourceSelectionSheet;
 - (id) _filePathForMediaURL:(id)a;
 - (d) _compressionQuality;
 - (void) _processMediaInfoDictionaries:(id)aatIndex:(Q)bprocessedResults:(id)cprocessedImageCount:(Q)dprocessedVideoCount:(Q)esuccessBlock:(@?)ffailureBlock:(@?)g;
 - (id) _displayStringForPhotos:(Q)avideos:(Q)b;
 - (void) _temporaryFilePathForOriginalImage:(id)asuccessBlock:(@?)bfailureBlock:(@?)c;
 - (void) _filePathFromMediaInfo:(id)asuccessBlock:(@?)bfailureBlock:(@?)c;
 - (BOOL) _willMultipleSelectionDelegateBeCalled;
 - (id) _thumbnailSizedImageForImage:(id)a;
 - (void) _chooseFilename:(id)adisplayString:(id)biconImage:(id)c;
 - (void) _processMediaInfoDictionaries:(id)asuccessBlock:(@?)bfailureBlock:(@?)c;
 - (void) _chooseFilenames:(id)adisplayString:(id)biconImage:(id)c;
 - (id) resultListener;
 - (BOOL) allowMultipleFiles;
 - (BOOL) isUsingCamera;
 - (id) delegate;
 - (void) setDocumentView:(id)a;
 - (id) documentView;


@end
