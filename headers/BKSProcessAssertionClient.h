
@interface BKSProcessAssertionClient : BSBaseXPCClient {

    NSMapTable* _assertionHandlersByIdentifier;
}
 + (id) sharedInstance;
 + (id) clientQueue;

 - (id) description;
 - (void) dealloc;
 - (void) _invalidate;
 - (void) queue_handleMessage:(id)a ;
 - (id) initWithServiceName:(id)a endpoint:(id)b ;
 - (void) queue_connectionWasDestroyed;
 - (double) backgroundTimeRemaining:(int)a ;
 - (void) registerClientHandler:(id)a forAssertionIdentifier:(id)b ;
 - (void) sendDestroyAssertion:(id)a ;
 - (void) unregisterClientHandlerForAssertionIdentifier:(id)a ;
 - (void) sendCreateAssertion:(id)a withResponseHandler:(@?)b ;
 - (void) sendUpdateAssertion:(id)a ;
 - (id) _errorWithCode:(unsigned long long)a ;
 - (void) _dispatchClientCalloutBlock:(@?)a ;
 - (void) _sendEvent:(id)a forMessageType:(unsigned long long)b responseHandler:(@?)c ;
 - (void) _handleDestroy:(id)a ;


@end
