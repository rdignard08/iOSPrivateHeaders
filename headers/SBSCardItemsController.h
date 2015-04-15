
@protocol SBSCardItemsControllerRemoteInterface;
@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface> {

    NSString* _identifier;
    NSXPCConnection* _connection;
}

 - (void) dealloc;
 - (id) initWithIdentifier:(id)a;
 - (void) addCardItems:(id)a;
 - (void) removeCardItems:(id)a;
 - (void) setCardItems:(id)a;
 - (void) clearAllCardItems;
 - (void) getCardItemsWithHandler:(@?)a;


@end
