
@interface WebNotification : NSObject {

    @"WebNotificationPrivate" _private;
}

 - (id) title;
 - (id) origin;
 - (id) init;
 - (id) body;
 - (id) tag;
 - (id) iconURL;
 - (Q) notificationID;
 - (void) dispatchShowEvent;
 - (void) dispatchCloseEvent;
 - (void) dispatchClickEvent;
 - (void) dispatchErrorEvent;
 - (id) dir;
 - (id) lang;


@end
