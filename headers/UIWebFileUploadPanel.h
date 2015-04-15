
@protocol UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate;
@interface UIWebFileUploadPanel : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate> {

    UIAlertController* _selectPickerTypeSheet;
    UIImagePickerController* _imagePicker;
    UIViewController* _presentationViewController;
    UIPopoverController* _presentationPopover;
    BOOL _documentViewPresentedViewController;
    {CGPoint="x"d"y"d} _interactionPoint;
    DOMNode* _interactionElement;
    BOOL _allowMultipleFiles;
    BOOL _isUsingCamera;
    NSArray* _mimeTypes;
    UIWebDocumentView* _documentView;
    NSObject<WebOpenPanelResultListener>* _resultListener;
    <UIWebFileUploadPanelDelegate>* _delegate;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) dismiss;
 - (id) initWithResultListener:(id)a mimeTypes:(id)b allowMultipleFiles:(BOOL)c documentView:(id)d ;
 - (void) present;
 - (void) popoverControllerDidDismissPopover:(id)a ;
 - (void) imagePickerControllerDidCancel:(id)a ;
 - (void) imagePickerController:(id)a didFinishPickingMediaWithInfo:(id)b ;
 - (void) imagePickerController:(id)a didFinishPickingMultipleMediaWithInfo:(id)b ;
 - (void) setMimeTypes:(id)a ;
 - (void) setResultListener:(id)a ;
 - (void) setAllowMultipleFiles:(BOOL)a ;
 - (void) setIsUsingCamera:(BOOL)a ;
 - (void) _dispatchDidDismiss;
 - (id) mimeTypes;
 - (BOOL) _string:(id)a hasPrefixCaseInsensitive:(id)b ;
 - (id) _mediaTypesForPickerSourceType:(long long)a ;
 - (id) _photoPickerWithSourceType:(long long)a ;
 - (void) _presentPopoverWithContentViewController:(id)a animated:(BOOL)b ;
 - (void) _presentFullscreenViewController:(id)a animated:(BOOL)b ;
 - (void) _cancel;
 - (void) _showPhotoPickerWithSourceType:(long long)a ;
 - (void) _dismissDisplayAnimated:(BOOL)a ;
 - (void) _showMediaSourceSelectionSheet;
 - (id) _filePathForMediaURL:(id)a ;
 - (double) _compressionQuality;
 - (void) _processMediaInfoDictionaries:(id)a atIndex:(unsigned long long)b processedResults:(id)c processedImageCount:(unsigned long long)d processedVideoCount:(unsigned long long)e successBlock:(@?)f failureBlock:(@?)g ;
 - (id) _displayStringForPhotos:(unsigned long long)a videos:(unsigned long long)b ;
 - (void) _temporaryFilePathForOriginalImage:(id)a successBlock:(@?)b failureBlock:(@?)c ;
 - (void) _filePathFromMediaInfo:(id)a successBlock:(@?)b failureBlock:(@?)c ;
 - (BOOL) _willMultipleSelectionDelegateBeCalled;
 - (id) _thumbnailSizedImageForImage:(id)a ;
 - (void) _chooseFilename:(id)a displayString:(id)b iconImage:(id)c ;
 - (void) _processMediaInfoDictionaries:(id)a successBlock:(@?)b failureBlock:(@?)c ;
 - (void) _chooseFilenames:(id)a displayString:(id)b iconImage:(id)c ;
 - (id) resultListener;
 - (BOOL) allowMultipleFiles;
 - (BOOL) isUsingCamera;
 - (id) delegate;
 - (void) setDocumentView:(id)a ;
 - (id) documentView;


@end
