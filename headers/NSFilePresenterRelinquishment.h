
@interface NSFilePresenterRelinquishment : NSObject {

    NSCountedSet* _blockingAccessClaimIDs;
    @? _reacquirer;
}

 - (BOOL) addBlockingAccessClaimID:(id)a ;
 - (void) setReacquirer:(@?)a ;
 - (void) removeBlockingAccessClaimID:(id)a ;
 - (void) removeAllBlockingAccessClaimIDs;
 - (void) removeBlockingAccessClaimID:(id)a thenContinue:(@?)b ;
 - (void) dealloc;


@end
