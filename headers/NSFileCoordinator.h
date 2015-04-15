
@interface NSFileCoordinator : NSObject {

    id _accessArbiter;
    id _fileReactor;
    id _purposeID;
    NSURL* _recentFilePresenterURL;
    id _accessClaimIDOrIDs;
    BOOL _isCancelled;
    NSMutableDictionary* _movedItems;
}
@property (atomic, copy, readwrite) NSString* purposeIdentifier;
 + (id) _currentFileCoordinator;
 + (void) addFilePresenter:(id)a;
 + (void) removeFilePresenter:(id)a;
 + (id) filePresenters;
 + (id) _canonicalURLForURL:(id)a;
 + (void) _printDebugInfo;
 + (BOOL) _skipCoordinationWork;
 + (void) _addFileProvider:(id)acompletionHandler:(@?)b;
 + (void) __itemAtURL:(id)adidChangeUbiquityWithPurposeID:(id)b;
 + (void) __itemAtURL:(id)adidDisappearWithPurposeID:(id)b;
 + (void) __itemAtURL:(id)adidChangeWithPurposeID:(id)b;
 + (void) _addFileProvider:(id)a;
 + (void) _removeFileProvider:(id)a;
 + (id) _fileProviders;
 + (void) _accessProcessIdentifiersUsingBlock:(@?)a;
 + (void) _addProcessIdentifier:(int)aforID:(id)b;
 + (void) _removeProcessIdentifierForID:(id)a;
 + (int) _processIdentifierForID:(id)a;
 + (int) _processIdentifierForPresenterWithID:(id)a;
 + (void) __itemAtURL:(id)adidMoveToURL:(id)bpurposeID:(id)c;
 + (void) __itemAtURL:(id)adidDisconnectWithPurposeID:(id)b;
 + (void) __itemAtURL:(id)adidReconnectWithPurposeID:(id)b;
 + (void) __itemAtURL:(id)adidGainVersionWithClientID:(id)bname:(id)cpurposeID:(id)d;
 + (void) __itemAtURL:(id)adidLoseVersionWithClientID:(id)bname:(id)cpurposeID:(id)d;
 + (void) __itemAtURL:(id)adidResolveConflictVersionWithClientID:(id)bname:(id)cpurposeID:(id)d;

 - (void) coordinateWritingItemAtURL:(id)a options:(unsigned long long)b error:(^@)c byAccessor:(@?)d ;
 - (id) initWithFilePresenter:(id)a ;
 - (void) itemAtURL:(id)a didMoveToURL:(id)b ;
 - (void) coordinateWritingItemAtURL:(id)a options:(unsigned long long)b writingItemAtURL:(id)c options:(unsigned long long)d error:(^@)e byAccessor:(@?)f ;
 - (void) _lockdownPurposeIdentifier;
 - (BOOL) _purposeIdentifierLockedDown;
 - (void) _setPurposeIdentifier:(id)a ;
 - (void) _invokeAccessor:(@?)a thenCompletionHandler:(@?)b ;
 - (void) _coordinateReadingItemAtURL:(id)a options:(unsigned long long)b error:(^@)c byAccessor:(@?)d ;
 - (void) _coordinateWritingItemAtURL:(id)a options:(unsigned long long)b error:(^@)c byAccessor:(@?)d ;
 - (void) _coordinateReadingItemAtURL:(id)a options:(unsigned long long)b writingItemAtURL:(id)c options:(unsigned long long)d error:(^@)e byAccessor:(@?)f ;
 - (void) _coordinateWritingItemAtURL:(id)a options:(unsigned long long)b writingItemAtURL:(id)c options:(unsigned long long)d error:(^@)e byAccessor:(@?)f ;
 - (void) _coordinateAccessWithIntents:(id)a queue:(id)b byAccessor:(@?)c ;
 - (void) __prepareForReadingItemsAtURLs:(id)a options:(unsigned long long)b writingItemsAtURLs:(id)c options:(unsigned long long)d byAccessor:(@?)e ;
 - (void) _itemAtURL:(id)a willMoveToURL:(id)b ;
 - (void) _itemAtURL:(id)a didMoveToURL:(id)b ;
 - (void) setPurposeIdentifier:(id)a ;
 - (id) purposeIdentifier;
 - (void) coordinateAccessWithIntents:(id)a queue:(id)b byAccessor:(@?)c ;
 - (void) prepareForReadingItemsAtURLs:(id)a options:(unsigned long long)b writingItemsAtURLs:(id)c options:(unsigned long long)d error:(^@)e byAccessor:(@?)f ;
 - (void) itemAtURL:(id)a willMoveToURL:(id)b ;
 - (void) _requestAccessClaim:(id)a withProcedure:(@?)b ;
 - (void) _forgetAccessClaimForID:(id)a ;
 - (void) _itemDidDisappearAtURL:(id)a ;
 - (void) _blockOnAccessClaim:(id)a ;
 - (void) _invokeAccessor:(@?)a orDont:(BOOL)b andRelinquishAccessClaim:(id)c ;
 - (id) _willStartWriteWithIntents:(id)a async:(BOOL)b ;
 - (void) _didEndWrite:(id)a ;
 - (void) _ubiquityDidChangeForItemAtURL:(id)a ;
 - (void) _itemDidChangeAtURL:(id)a ;
 - (void) _setFileProvider:(id)a ;
 - (id) retainAccess;
 - (void) releaseAccess:(id)a ;
 - (void) dealloc;
 - (void) __coordinateReadingItemAtURL:(id)a options:(unsigned long long)b purposeID:(id)c byAccessor:(@?)d ;
 - (void) __coordinateWritingItemAtURL:(id)a options:(unsigned long long)b purposeID:(id)c byAccessor:(@?)d ;
 - (void) __coordinateReadingItemAtURL:(id)a options:(unsigned long long)b writingItemAtURL:(id)c options:(unsigned long long)d purposeID:(id)e byAccessor:(@?)f ;
 - (void) __coordinateWritingItemAtURL:(id)a options:(unsigned long long)b writingItemAtURL:(id)c options:(unsigned long long)d purposeID:(id)e byAccessor:(@?)f ;
 - (void) coordinateReadingItemAtURL:(id)a options:(unsigned long long)b writingItemAtURL:(id)c options:(unsigned long long)d error:(^@)e byAccessor:(@?)f ;
 - (void) coordinateReadingItemAtURL:(id)a options:(unsigned long long)b error:(^@)c byAccessor:(@?)d ;
 - (id) init;
 - (void) cancel;


@end
