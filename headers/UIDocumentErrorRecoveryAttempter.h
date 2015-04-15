
@interface UIDocumentErrorRecoveryAttempter : NSObject {

    @"UIDocument" _document;
    id _wrappedRecoveryAttempter;
    @? _continuerOrNil;
    q _silentRecoveryOptionIndex;
    @? _appModalRecoveryAttempter;
    @? _recoveryCancelerOrNil;
    {?="attemptedRecovery"b1} _errorRecoveryAttempterFlags;
}

 - (void) dealloc;
 - (BOOL) attemptRecoveryFromError:(id)aoptionIndex:(Q)b;
 - (BOOL) attemptSilentRecoveryFromError:(id)aerror:(^@)b;
 - (void) cancelRecovery;
 - (id) initWithDocument:(id)awrappedRecoveryAttempter:(id)b;
 - (id) initWithDocument:(id)asilentRecoveryOptionIndex:(Q)bappModalRecoveryAttempter:(@?)crecoveryCanceler:(@?)d;


@end
