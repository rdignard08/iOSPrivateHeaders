
@interface NSMessagePortNameServer : NSPortNameServer {

}
 + (id) sharedInstance;

 - (id) portForName:(id)a host:(id)b ;
 - (BOOL) removePortForName:(id)a ;
 - (BOOL) registerPort:(id)a name:(id)b ;
 - (id) portForName:(id)a ;


@end
