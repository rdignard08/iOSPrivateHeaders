
@interface NSFileAccessNode : NSObject {

    NSFileAccessNode* _parent;
    NSString* _name;
    NSString* _normalizedName;
    NSFileAccessNode* _symbolicLinkDestination;
    unsigned long long _symbolicLinkReferenceCount;
    NSMutableDictionary* _childrenByNormalizedName;
    id _presenterOrPresenters;
    id _provider;
    id _accessClaimOrClaims;
    BOOL _isArbitrationBoundary;
    BOOL _isFilePackageIsFigured;
    BOOL _isFilePackage;
    NSString* _lastRequestedChildName;
    NSFileAccessNode* _lastRequestedChild;
    id _progressPublisherOrPublishers;
    id _progressSubscriberOrSubscribers;
}

 - (id) standardizedURL;
 - (id) parent;
 - (void) removePresenter:(id)a ;
 - (void) addPresenter:(id)a ;
 - (void) setProvider:(id)a ;
 - (void) forEachPresenterOfItemOrContainedItemPerformProcedure:(@?)a ;
 - (void) removeSelfIfUseless;
 - (void) removeChildForNormalizedName:(id)a ;
 - (id) descendantAtPath:(id)a componentRange:({_NSRange=QQ})b forAddingLeafNode:(id)c create:(BOOL)d ;
 - (id) normalizationOfChildName:(id)a ;
 - (id) initWithParent:(id)a name:(id)b normalizedName:(id)c ;
 - (void) setChild:(id)a forName:(id)b normalizedName:(id)c ;
 - (id) childForRange:({_NSRange=QQ})a ofPath:(id)b ;
 - (id) pathFromAncestor:(id)a ;
 - (BOOL) itemIsFilePackage;
 - (void) forEachDescendantPerformProcedure:(@?)a ;
 - (id) biggestFilePackageLocation;
 - (void) forEachAccessClaimOnItemPerformProcedure:(@?)a ;
 - (void) forEachAccessClaimOnItemOrContainedItemPerformProcedure:(@?)a ;
 - (void) forEachPresenterOfItemPerformProcedure:(@?)a ;
 - (void) forEachPresenterOfContainedItemPerformProcedure:(@?)a ;
 - (BOOL) itemIsInItemAtLocation:(id)a ;
 - (id) pathExceptPrivate;
 - (void) forEachProgressPublisherOfItemPerformProcedure:(@?)a ;
 - (void) forEachProgressSubscriberOfItemPerformProcedure:(@?)a ;
 - (void) assertLive;
 - (BOOL) _mayContainCriticalDebuggingInformation;
 - (id) _childrenExcludingExcessNodes:(BOOL)a ;
 - (id) descriptionWithIndenting:(id)a excludingExcessNodes:(BOOL)b ;
 - (void) setSymbolicLinkDestination:(id)a ;
 - (id) pathToDescendantForFileURL:(id)a componentRange:(^{_NSRange=QQ})b ;
 - (id) descendantAtPath:(id)a componentRange:({_NSRange=QQ})b create:(BOOL)c ;
 - (id) descendantForFileURL:(id)a ;
 - (void) setParent:(id)a name:(id)b ;
 - (void) forEachRelevantAccessClaimPerformProcedure:(@?)a ;
 - (void) forEachReactorToItemOrContainedItemPerformProcedure:(@?)a ;
 - (void) forEachPresenterOfContainingFilePackagePerformProcedure:(@?)a ;
 - (void) forEachPresenterOfItemOrContainingItemPerformProcedure:(@?)a ;
 - (void) forEachPresenterOfContainingItemPerformProcedure:(@?)a ;
 - (void) setArbitrationBoundary;
 - (BOOL) itemIsSubarbitrable;
 - (BOOL) itemIsItemAtLocation:(id)a ;
 - (void) addAccessClaim:(id)a ;
 - (void) removeAccessClaim:(id)a ;
 - (id) urlOfSubitemAtPath:(id)a plusPath:(id)b ;
 - (void) addProgressPublisher:(id)a ;
 - (void) removeProgressPublisher:(id)a ;
 - (void) addProgressSubscriber:(id)a ;
 - (void) removeProgressSubscriber:(id)a ;
 - (void) forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(@?)a ;
 - (void) forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(@?)a ;
 - (void) forEachProgressThingOfItemOrContainedItemPerformProcedure:(@?)a ;
 - (void) assertDead;
 - (void) assertDescendantsLive;
 - (id) sensitiveDescription;
 - (id) description;
 - (void) dealloc;
 - (id) url;
 - (id) itemProvider;


@end
