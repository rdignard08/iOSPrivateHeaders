
@interface BKSProcessAssertionClient : BSBaseXPCClient {

    @"NSMapTable" _assertionHandlersByIdentifier;
}
 + (id) sharedInstance;
 + (id) clientQueue;

 - (id) description;
 - (void) dealloc;
 - (void) _invalidate;
 - (void) queue_handleMessage:(id)a;
 - (id) initWithServiceName:(id)aendpoint:(id)b;
 - (void) queue_connectionWasDestroyed;
 - (d) backgroundTimeRemaining:(i)a;
 - (void) registerClientHandler:(id)aforAssertionIdentifier:(id)b;
 - (void) sendDestroyAssertion:(id)a;
 - (void) unregisterClientHandlerForAssertionIdentifier:(id)a;
 - (void) sendCreateAssertion:(id)awithResponseHandler:(@?)b;
 - (void) sendUpdateAssertion:(id)a;
 - (id) _errorWithCode:(Q)a;
 - (void) _dispatchClientCalloutBlock:(@?)a;
 - (void) _sendEvent:(id)aforMessageType:(Q)bresponseHandler:(@?)c;
 - (void) _handleDestroy:(id)a;


@end
