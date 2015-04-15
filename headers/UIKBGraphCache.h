
@protocol _UIScreenBasedObject;
@interface UIKBGraphCache : NSObject <_UIScreenBasedObject> {

    UIScreen _screen;
    NSMutableDictionary _graphCache;
}
@property (nonatomic, assign, readonly) NSMutableDictionary* graphCache;
@property (atomic, assign, readonly) UIScreen* _intendedScreen;
@property (atomic, assign, readonly) NSDictionary* _options;
 + (id) graphCacheForScreen:(id)a;

 - (id) _options;
 - (void) dealloc;
 - (id) _initWithScreen:(id)aoptions:(id)b;
 - (BOOL) _matchingOptions:(id)a;
 - (id) _intendedScreen;
 - (id) graphCache;


@end
