
@interface NSFileCoordinator : NSObject {

    id _accessArbiter;
    id _fileReactor;
    id _purposeID;
    @"NSURL" _recentFilePresenterURL;
    id _accessClaimIDOrIDs;
    BOOL _isCancelled;
    @"NSMutableDictionary" _movedItems;
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
 + (void) _addProcessIdentifier:(i)aforID:(id)b;
 + (void) _removeProcessIdentifierForID:(id)a;
 + (i) _processIdentifierForID:(id)a;
 + (i) _processIdentifierForPresenterWithID:(id)a;
 + (void) __itemAtURL:(id)adidMoveToURL:(id)bpurposeID:(id)c;
 + (void) __itemAtURL:(id)adidDisconnectWithPurposeID:(id)b;
 + (void) __itemAtURL:(id)adidReconnectWithPurposeID:(id)b;
 + (void) __itemAtURL:(id)adidGainVersionWithClientID:(id)bname:(id)cpurposeID:(id)d;
 + (void) __itemAtURL:(id)adidLoseVersionWithClientID:(id)bname:(id)cpurposeID:(id)d;
 + (void) __itemAtURL:(id)adidResolveConflictVersionWithClientID:(id)bname:(id)cpurposeID:(id)d;

 - (void) coordinateWritingItemAtURL:(id)aoptions:(Q)berror:(^@)cbyAccessor:(@?)d;
 - (id) initWithFilePresenter:(id)a;
 - (void) itemAtURL:(id)adidMoveToURL:(id)b;
 - (void) coordinateWritingItemAtURL:(id)aoptions:(Q)bwritingItemAtURL:(id)coptions:(Q)derror:(^@)ebyAccessor:(@?)f;
 - (void) _lockdownPurposeIdentifier;
 - (BOOL) _purposeIdentifierLockedDown;
 - (void) _setPurposeIdentifier:(id)a;
 - (void) _invokeAccessor:(@?)athenCompletionHandler:(@?)b;
 - (void) _coordinateReadingItemAtURL:(id)aoptions:(Q)berror:(^@)cbyAccessor:(@?)d;
 - (void) _coordinateWritingItemAtURL:(id)aoptions:(Q)berror:(^@)cbyAccessor:(@?)d;
 - (void) _coordinateReadingItemAtURL:(id)aoptions:(Q)bwritingItemAtURL:(id)coptions:(Q)derror:(^@)ebyAccessor:(@?)f;
 - (void) _coordinateWritingItemAtURL:(id)aoptions:(Q)bwritingItemAtURL:(id)coptions:(Q)derror:(^@)ebyAccessor:(@?)f;
 - (void) _coordinateAccessWithIntents:(id)aqueue:(id)bbyAccessor:(@?)c;
 - (void) __prepareForReadingItemsAtURLs:(id)aoptions:(Q)bwritingItemsAtURLs:(id)coptions:(Q)dbyAccessor:(@?)e;
 - (void) _itemAtURL:(id)awillMoveToURL:(id)b;
 - (void) _itemAtURL:(id)adidMoveToURL:(id)b;
 - (void) setPurposeIdentifier:(id)a;
 - (id) purposeIdentifier;
 - (void) coordinateAccessWithIntents:(id)aqueue:(id)bbyAccessor:(@?)c;
 - (void) prepareForReadingItemsAtURLs:(id)aoptions:(Q)bwritingItemsAtURLs:(id)coptions:(Q)derror:(^@)ebyAccessor:(@?)f;
 - (void) itemAtURL:(id)awillMoveToURL:(id)b;
 - (void) _requestAccessClaim:(id)awithProcedure:(@?)b;
 - (void) _forgetAccessClaimForID:(id)a;
 - (void) _itemDidDisappearAtURL:(id)a;
 - (void) _blockOnAccessClaim:(id)a;
 - (void) _invokeAccessor:(@?)aorDont:(BOOL)bandRelinquishAccessClaim:(id)c;
 - (id) _willStartWriteWithIntents:(id)aasync:(BOOL)b;
 - (void) _didEndWrite:(id)a;
 - (void) _ubiquityDidChangeForItemAtURL:(id)a;
 - (void) _itemDidChangeAtURL:(id)a;
 - (void) _setFileProvider:(id)a;
 - (id) retainAccess;
 - (void) releaseAccess:(id)a;
 - (void) dealloc;
 - (void) __coordinateReadingItemAtURL:(id)aoptions:(Q)bpurposeID:(id)cbyAccessor:(@?)d;
 - (void) __coordinateWritingItemAtURL:(id)aoptions:(Q)bpurposeID:(id)cbyAccessor:(@?)d;
 - (void) __coordinateReadingItemAtURL:(id)aoptions:(Q)bwritingItemAtURL:(id)coptions:(Q)dpurposeID:(id)ebyAccessor:(@?)f;
 - (void) __coordinateWritingItemAtURL:(id)aoptions:(Q)bwritingItemAtURL:(id)coptions:(Q)dpurposeID:(id)ebyAccessor:(@?)f;
 - (void) coordinateReadingItemAtURL:(id)aoptions:(Q)bwritingItemAtURL:(id)coptions:(Q)derror:(^@)ebyAccessor:(@?)f;
 - (void) coordinateReadingItemAtURL:(id)aoptions:(Q)berror:(^@)cbyAccessor:(@?)d;
 - (id) init;
 - (void) cancel;


@end
