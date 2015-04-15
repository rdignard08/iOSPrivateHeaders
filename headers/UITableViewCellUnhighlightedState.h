
@interface UITableViewCellUnhighlightedState : NSObject {

    BOOL _opaque;
    BOOL _highlighted;
    UIColor* _backgroundColor;
}
@property (atomic, assign, readwrite) NSNumber* opaque;
@property (atomic, assign, readwrite) NSNumber* highlighted;
@property (atomic, retain, readwrite) UIColor* backgroundColor;

 - (void) dealloc;
 - (void) setHighlighted:(BOOL)a ;
 - (BOOL) highlighted;
 - (BOOL) opaque;
 - (void) setBackgroundColor:(id)a ;
 - (id) backgroundColor;
 - (void) setOpaque:(BOOL)a ;


@end
