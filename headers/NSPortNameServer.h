
@interface NSPortNameServer : NSObject {

}
 + (id) systemDefaultPortNameServer;
 + (id) defaultPortNameServer;

 - (id) portForName:(id)a host:(id)b ;
 - (BOOL) removePortForName:(id)a ;
 - (BOOL) registerPort:(id)a name:(id)b ;
 - (id) portForName:(id)a ;
 - (BOOL) registerPort:(id)a forName:(id)b ;
 - (id) portForName:(id)a onHost:(id)b ;


@end
