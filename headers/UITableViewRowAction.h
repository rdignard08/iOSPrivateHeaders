
@protocol NSCopying;
@interface UITableViewRowAction : NSObject <NSCopying> {

    q _style;
    @"NSString" _title;
    @"UIColor" _backgroundColor;
    @? _handler;
    @"_UITableViewCellActionButton" _button;
    @"UIVisualEffect" _backgroundEffect;
}
@property (nonatomic, assign, readonly) NSNumber* style;
@property (nonatomic, copy, readwrite) NSString* title;
@property (nonatomic, copy, readwrite) UIColor* backgroundColor;
@property (nonatomic, copy, readwrite) UIVisualEffect* backgroundEffect;
@property (nonatomic, assign, readonly, _handler) NSNumber* handler;
 + (id) rowActionWithStyle:(q)atitle:(id)bhandler:(@?)c;

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
 - (q) style;
 - (id) backgroundColor;


@end