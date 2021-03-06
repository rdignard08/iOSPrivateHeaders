
@protocol UIActionSheetDelegate;
@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {

    <UIDocumentInteractionControllerDelegate>* _delegate;
    id _previewItemProxy;
    NSArray* _icons;
    id _annotation;
    NSString* _uniqueIdentifier;
    UIViewController* _presentingViewController;
    id _previewController;
    NSArray* _gestureRecognizers;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _presentRect;
    UIView* _presentView;
    UIBarButtonItem* _presentItem;
    NSArray* _availableApplications;
    UIPopoverController* _popoverController;
    UIActivityViewController* _activityViewController;
    BOOL _shouldUnzipDocument;
    BOOL _sourceIsManaged;
    NSURL* _unzippedDocumentURL;
    id _applicationToOpen;
    NSURL* _tmpURLToDeleteOnDealloc;
    {?="delegateViewControllerForPreview"b1"delegateRectForPreview"b1"delegateViewForPreview"b1"transitionImageForPreview"b1"documentProxyForPreview"b1"delegateWillBeginPreview"b1"delegateDidEndPreviewPreview"b1"delegateWillEndPreviewPreview"b1"delegateWillPresentOptionsMenu"b1"delegateDidDismissOptionsMenu"b1"delegateWillPresentOpenInMenu"b1"delegateDidDismissOpenInMenu"b1"delegateWillBeginSendingToApplication"b1"delegateDidEndSendingToApplication"b1"delegateCanPerformAction"b1"delegatePerformAction"b1"delegateUnzipURL"b1"showingOptionsMenu"b1"showingOpenInMenu"b1"delegateExcludesActivities"b1"delegateCanBlockRemoteImages"b1"delegateAddsActivities"b1"delegateProvidesActivityItem"b1"delegateProvidesPrintInfo"b1"performingActivity"b1} _documentInteractionControllerFlags;
}
@property (nonatomic, retain, readwrite) NSString* uniqueIdentifier;
@property (nonatomic, assign, readwrite) NSNumber* shouldUnzipDocument;
@property (nonatomic, assign, readwrite) NSNumber* sourceIsManaged;
@property (nonatomic, assign, readonly, getter=isArchive) NSNumber* archive;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (atomic, retain, readwrite) NSURL* URL;
@property (nonatomic, copy, readwrite) NSString* UTI;
@property (atomic, copy, readwrite) NSString* name;
@property (nonatomic, assign, readonly) NSArray* icons;
@property (nonatomic, retain, readwrite) NSNumber* annotation;
@property (nonatomic, assign, readonly) NSArray* gestureRecognizers;
@property (nonatomic, retain, readwrite) NSString* uniqueIdentifier;
@property (nonatomic, assign, readwrite) NSNumber* shouldUnzipDocument;
@property (nonatomic, assign, readwrite) NSNumber* sourceIsManaged;
@property (nonatomic, retain, readwrite) UIActivityViewController* activityViewController;
@property (nonatomic, assign, readwrite, getter=_performingActivity, setter=_setPerformingActivity:) NSNumber* performingActivity;
@property (nonatomic, assign, readonly) NSNumber* previewController;
@property (nonatomic, retain, readwrite) UIPopoverController* popoverController;
@property (nonatomic, assign, readonly) _UIPreviewItemProxy* previewItemProxy;
 + (void) initialize;
 + (id) _applicationsForDocumentProxy:(id)a;
 + (id) allActionSelectorNames;
 + (id) _UTIForFileURL:(id)a;
 + (id) _unzippingQueue;
 + (id) interactionControllerWithURL:(id)a;
 + (id) _pathFilterPredicate;

 - (void) openResourceOperation:(id)a didFinishCopyingResource:(id)b ;
 - (void) dealloc;
 - (id) name;
 - (id) initWithURL:(id)a ;
 - (void) setDelegate:(id)a ;
 - (id) gestureRecognizers;
 - (id) icons;
 - (void) setPopoverController:(id)a ;
 - (void) popoverController:(id)a animationCompleted:(long long)b ;
 - (void) _openDocumentWithApplication:(id)a ;
 - (BOOL) presentPreviewAnimated:(BOOL)a ;
 - (BOOL) _delegatePerformAction:(SEL)a ;
 - (void) _activityControllerViewDidDismiss;
 - (BOOL) _performingActivity;
 - (void) _setPerformingActivity:(BOOL)a ;
 - (BOOL) sourceIsManaged;
 - (id) _applications:(BOOL)a ;
 - (void) _setApplicationToOpen:(id)a ;
 - (void) _openDocumentWithCurrentApplication;
 - (id) popoverController;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) previewController:(id)a frameForPreviewItem:(id)b inSourceView:(^@)c ;
 - (void) previewControllerWillDismiss:(id)a ;
 - (void) previewControllerDidDismiss:(id)a ;
 - (id) previewController:(id)a transitionImageForPreviewItem:(id)b contentRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})c ;
 - (id) previewItemProxy;
 - (long long) numberOfPreviewItemsInPreviewController:(id)a ;
 - (id) previewController:(id)a previewItemAtIndex:(long long)b ;
 - (id) activityViewController;
 - (BOOL) _canUnzipDocument;
 - (id) UTI;
 - (id) _documentProxySourceIsManaged:(BOOL)a ;
 - (BOOL) _delegateExistsAndImplementsRequiredMethods:(^@)a ;
 - (void) setPreviewURLOverride:(id)a ;
 - (unsigned long long) applicationCount;
 - (void) openDocumentWithDefaultApplication;
 - (void) _dismissEverythingWithExtremePrejudiceAnimated:(BOOL)a ;
 - (void) setShouldUnzipDocument:(BOOL)a ;
 - (void) _interfaceOrientationWillChange:(id)a ;
 - (BOOL) _isFilenameValidForUnzipping:(id)a allowsArchiveZip:(BOOL)b ;
 - (BOOL) _isVideo;
 - (BOOL) _isImage;
 - (BOOL) _canPreviewUnzippedDocument;
 - (BOOL) _canUnzipDocumentAndPresentOptions;
 - (BOOL) _setupForOptionsMenu;
 - (void) _unzipFileAndSetupPayload:(@?)a ;
 - (BOOL) isArchive;
 - (BOOL) _canUnzipDocumentForPreview;
 - (BOOL) _documentNeedsHelpUnzippingForPreview;
 - (BOOL) _setupPreviewController;
 - (id) previewController;
 - (void) setSourceIsManaged:(BOOL)a ;
 - (BOOL) _canUnzipDocumentAndPresentOpenIn;
 - (BOOL) _setupForOpenInMenu;
 - (void) _presentPreview:(id)a ;
 - (void) _presentOptionsMenu:(id)a ;
 - (BOOL) presentOptionsMenuFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inView:(id)b animated:(BOOL)c ;
 - (BOOL) presentOpenInMenuFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inView:(id)b animated:(BOOL)c ;
 - (id) annotation;
 - (void) _finishedCopyingResource;
 - (id) _applicationToOpen;
 - (void) _fixupFileExtensionIfNeeded;
 - (BOOL) _delegateImplementsLegacyActions;
 - (BOOL) _delegateCanPerformAction:(SEL)a ;
 - (BOOL) _isImageOrVideo;
 - (void) setActivityViewController:(id)a ;
 - (BOOL) _isValidURL:(id)a ;
 - (id) _unzipFileAndSetupPayload:(id)a completion:(@?)b ;
 - (void) dismissMenuAnimated:(BOOL)a ;
 - (void) setUTI:(id)a ;
 - (BOOL) shouldUnzipDocument;
 - (BOOL) presentOptionsMenuFromBarButtonItem:(id)a animated:(BOOL)b ;
 - (id) presentingNavigationController;
 - (BOOL) presentOpenInMenuFromBarButtonItem:(id)a animated:(BOOL)b ;
 - (void) dismissPreviewAnimated:(BOOL)a ;
 - (void) _presentOpenIn:(id)a ;
 - (id) _pathsInArchive:(@?)a ;
 - (void) _setUnzippedDocumentURL:(id)a ;
 - (id) _unzippedDocumentURL;
 - (BOOL) _isPackageArchive:(id)a ;
 - (BOOL) _canSaveToCameraRollForType;
 - (void) setAnnotation:(id)a ;
 - (id) subitemsInArchive:(@?)a ;
 - (id) extractSubitemFromArchive:(id)a completion:(@?)b ;
 - (id) URL;
 - (id) delegate;
 - (void) setURL:(id)a ;
 - (void) setUniqueIdentifier:(id)a ;
 - (id) uniqueIdentifier;
 - (void) _invalidate;
 - (void) setName:(id)a ;


@end
