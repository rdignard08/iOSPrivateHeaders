
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

 - (id) initForOpeningResource:(id)a usingApplication:(id)b uniqueDocumentIdentifier:(id)c sourceIsManaged:(BOOL)d userInfo:(id)e options:(id)f delegate:(id)g ;
 - (BOOL) didSucceed;
 - (void) completeOperation;
 - (void) main;
 - (BOOL) isFinished;
 - (BOOL) isExecuting;
 - (BOOL) isConcurrent;
 - (void) dealloc;
 - (void) start;


@end
