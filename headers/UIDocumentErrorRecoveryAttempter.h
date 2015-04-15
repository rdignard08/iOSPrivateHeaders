
@interface UIDocumentErrorRecoveryAttempter : NSObject {

    UIDocument _document;
    id _wrappedRecoveryAttempter;
    @? _continuerOrNil;
    long long _silentRecoveryOptionIndex;
    @? _appModalRecoveryAttempter;
    @? _recoveryCancelerOrNil;
    attemptedRecovery _errorRecoveryAttempterFlags;
}

 - (void) dealloc;
 - (BOOL) attemptRecoveryFromError:(id)aoptionIndex:(unsigned long long)b;
 - (BOOL) attemptSilentRecoveryFromError:(id)aerror:(^@)b;
 - (void) cancelRecovery;
 - (id) initWithDocument:(id)awrappedRecoveryAttempter:(id)b;
 - (id) initWithDocument:(id)asilentRecoveryOptionIndex:(unsigned long long)bappModalRecoveryAttempter:(@?)crecoveryCanceler:(@?)d;


@end
