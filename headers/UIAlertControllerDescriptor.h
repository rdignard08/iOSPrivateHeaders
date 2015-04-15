
@interface UIAlertControllerDescriptor : NSObject {

    BOOL _hasTitle;
    BOOL _hasMessage;
}
@property (atomic, assign, readwrite) NSNumber* hasTitle;
@property (atomic, assign, readwrite) NSNumber* hasMessage;

 - (void) setHasTitle:(BOOL)a;
 - (void) setHasMessage:(BOOL)a;
 - (BOOL) hasTitle;
 - (BOOL) hasMessage;


@end
