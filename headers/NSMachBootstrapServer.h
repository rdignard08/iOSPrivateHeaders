
@interface NSMachBootstrapServer : NSPortNameServer {

}
 + (id) sharedInstance;

 - (id) portForName:(id)ahost:(id)b;
 - (id) servicePortWithName:(id)a;
 - (BOOL) removePortForName:(id)a;
 - (BOOL) registerPort:(id)aname:(id)b;
 - (id) portForName:(id)a;
 - (id) portForName:(id)aoptions:(unsigned long long)b;


@end
