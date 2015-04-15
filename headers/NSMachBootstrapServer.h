
@interface NSMachBootstrapServer : NSPortNameServer {

}
 + (id) sharedInstance;

 - (id) portForName:(id)a host:(id)b ;
 - (id) servicePortWithName:(id)a ;
 - (BOOL) removePortForName:(id)a ;
 - (BOOL) registerPort:(id)a name:(id)b ;
 - (id) portForName:(id)a ;
 - (id) portForName:(id)a options:(unsigned long long)b ;


@end
