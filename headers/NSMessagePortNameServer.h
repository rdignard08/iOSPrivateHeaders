
@interface NSMessagePortNameServer : NSPortNameServer {

}
 + (id) sharedInstance;

 - (id) portForName:(id)ahost:(id)b;
 - (BOOL) removePortForName:(id)a;
 - (BOOL) registerPort:(id)aname:(id)b;
 - (id) portForName:(id)a;


@end
