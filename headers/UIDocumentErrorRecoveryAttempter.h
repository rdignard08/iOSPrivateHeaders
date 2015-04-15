
@interface UIDocumentErrorRecoveryAttempter : NSObject {

    UIDocument* _document;
    id _wrappedRecoveryAttempter;
    @? _continuerOrNil;
    long long _silentRecoveryOptionIndex;
    @? _appModalRecoveryAttempter;
    @? _recoveryCancelerOrNil;
    attemptedRecovery* _errorRecoveryAttempterFlags;
}

 - (void) dealloc;
 - (BOOL) attemptRecoveryFromError:(id)a optionIndex:(unsigned long long)b ;
 - (BOOL) attemptSilentRecoveryFromError:(id)a error:(^@)b ;
 - (void) cancelRecovery;
 - (id) initWithDocument:(id)a wrappedRecoveryAttempter:(id)b ;
 - (id) initWithDocument:(id)a silentRecoveryOptionIndex:(unsigned long long)b appModalRecoveryAttempter:(@?)c recoveryCanceler:(@?)d ;


@end
