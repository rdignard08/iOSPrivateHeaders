
@interface UIWebOverflowScrollInfo : NSObject {

    BOOL _isUserScroll;
    @"DOMNode" _node;
    {CGPoint="x"d"y"d} _offset;
}
@property (nonatomic, retain, readwrite) DOMNode* node;
@property (nonatomic, assign, readwrite) NSNumber* offset;
@property (nonatomic, assign, readwrite) NSNumber* isUserScroll;

 - (void) dealloc;
 - (id) node;
 - (id) initWithNode:(id)aoffset:({CGPoint=dd})bisUserScroll:(BOOL)c;
 - (BOOL) coalesceScrollForNode:(id)aoffset:({CGPoint=dd})bisUserScroll:(BOOL)c;
 - (void) setNode:(id)a;
 - (BOOL) isUserScroll;
 - (void) setIsUserScroll:(BOOL)a;
 - ({CGPoint=dd}) offset;
 - (void) setOffset:({CGPoint=dd})a;


@end
