
@protocol NSCopying;
@interface UITableViewRowAction : NSObject <NSCopying> {

    long long _style;
    NSString* _title;
    UIColor* _backgroundColor;
    @? _handler;
    _UITableViewCellActionButton* _button;
    UIVisualEffect* _backgroundEffect;
}
@property (nonatomic, assign, readonly) NSNumber* style;
@property (nonatomic, copy, readwrite) NSString* title;
@property (nonatomic, copy, readwrite) UIColor* backgroundColor;
@property (nonatomic, copy, readwrite) UIVisualEffect* backgroundEffect;
@property (nonatomic, assign, readonly, getter=_handler) NSNumber* handler;
 + (id) rowActionWithStyle:(long long)atitle:(id)bhandler:(@?)c;

 - (id) title;
 - (void) setTitle:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) _initWithStyle:(id)atitle:(id)bhandler:(@?)c;
 - (id) _button;
 - (void) _setButton:(id)a;
 - (id) backgroundEffect;
 - (void) setBackgroundEffect:(id)a;
 - (@?) _handler;
 - (void) setBackgroundColor:(id)a;
 - (long long) style;
 - (id) backgroundColor;


@end
