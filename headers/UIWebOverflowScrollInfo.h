
@interface UIWebOverflowScrollInfo : NSObject {

    BOOL _isUserScroll;
    DOMNode* _node;
    {CGPoint="x"d"y"d} _offset;
}
@property (nonatomic, retain, readwrite) DOMNode* node;
@property (nonatomic, assign, readwrite) NSNumber* offset;
@property (nonatomic, assign, readwrite) NSNumber* isUserScroll;

 - (void) dealloc;
 - (id) node;
 - (id) initWithNode:(id)a offset:({CGPoint=dd})b isUserScroll:(BOOL)c ;
 - (BOOL) coalesceScrollForNode:(id)a offset:({CGPoint=dd})b isUserScroll:(BOOL)c ;
 - (void) setNode:(id)a ;
 - (BOOL) isUserScroll;
 - (void) setIsUserScroll:(BOOL)a ;
 - ({CGPoint=dd}) offset;
 - (void) setOffset:({CGPoint=dd})a ;


@end
