
@interface LSOpenOperation : NSOperation {

    BOOL _executing;
    BOOL _finished;
    BOOL _sourceIsManaged;
    NSURL* _resourceURL;
    NSString* _applicationIdentifier;
    NSString* _documentIdentifier;
    id _userInfoPlist;
    NSDictionary* _options;
    id _delegate;
    int _result;
}

 - (id) initForOpeningResource:(id)ausingApplication:(id)buniqueDocumentIdentifier:(id)csourceIsManaged:(BOOL)duserInfo:(id)eoptions:(id)fdelegate:(id)g;
 - (BOOL) didSucceed;
 - (void) completeOperation;
 - (void) main;
 - (BOOL) isFinished;
 - (BOOL) isExecuting;
 - (BOOL) isConcurrent;
 - (void) dealloc;
 - (void) start;


@end
