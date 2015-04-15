
@interface NSConcreteNotification : NSNotification {

    NSString* name;
    id object;
    NSDictionary* userInfo;
    BOOL dyingObject;
}
 + (id) newTempNotificationWithName:(id)aobject:(id)buserInfo:(id)c;

 - (id) initWithName:(id)a object:(id)b userInfo:(id)c ;
 - (void) recycle;
 - (void) dealloc;
 - (id) userInfo;
 - (id) name;
 - (id) object;


@end
