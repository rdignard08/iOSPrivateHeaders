
@interface NSPortNameServer : NSObject {

}
 + (id) systemDefaultPortNameServer;
 + (id) defaultPortNameServer;

 - (id) portForName:(id)ahost:(id)b;
 - (BOOL) removePortForName:(id)a;
 - (BOOL) registerPort:(id)aname:(id)b;
 - (id) portForName:(id)a;
 - (BOOL) registerPort:(id)aforName:(id)b;
 - (id) portForName:(id)aonHost:(id)b;


@end
