
@interface NSFileProviderProxy : NSFileReactorProxy {

    BOOL _wantsWriteNotifications;
}

 - (void) setItemLocation:(id)a;
 - (void) forwardUsingMessageSender:(@?)a;
 - (void) observePresentationChangeOfKind:(id)awithPresenter:(id)burl:(id)cnewURL:(id)d;
 - (void) provideLogicalURLForURL:(id)acompletionHandler:(@?)b;
 - (@?) provideItemAtURL:(id)aforAccessClaim:(id)bcompletionHandler:(@?)c;
 - (void) providePhysicalURLForURL:(id)acompletionHandler:(@?)b;
 - (void) observeEndOfWriteAtLocation:(id)aforAccessClaim:(id)b;
 - (BOOL) wantsWriteNotifications;
 - (void) setWantsWriteNotifications:(BOOL)a;


@end
