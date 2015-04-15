
@interface NSFileProviderProxy : NSFileReactorProxy {

    BOOL _wantsWriteNotifications;
}

 - (void) setItemLocation:(id)a ;
 - (void) forwardUsingMessageSender:(@?)a ;
 - (void) observePresentationChangeOfKind:(id)a withPresenter:(id)b url:(id)c newURL:(id)d ;
 - (void) provideLogicalURLForURL:(id)a completionHandler:(@?)b ;
 - (@?) provideItemAtURL:(id)a forAccessClaim:(id)b completionHandler:(@?)c ;
 - (void) providePhysicalURLForURL:(id)a completionHandler:(@?)b ;
 - (void) observeEndOfWriteAtLocation:(id)a forAccessClaim:(id)b ;
 - (BOOL) wantsWriteNotifications;
 - (void) setWantsWriteNotifications:(BOOL)a ;


@end
