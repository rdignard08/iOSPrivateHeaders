
@interface _UIInlineCandidateCell : UIView {

    NSString* _candidate;
    unsigned long long _index;
    UIFont* _font;
    {CGSize="width"d"height"d} _stringImageSize;
    BOOL _highlighted;
    id _target;
    SEL _action;
    BOOL _lastItem;
    BOOL _dontDrawRightEdge;
}

 - (void) dealloc;
 - (void) setHighlighted:(BOOL)a ;
 - (unsigned long long) index;
 - (id) initWithCandidate:(id)a andIndex:(unsigned long long)b withFontSize:(double)c target:(id)d action:(SEL)e ;
 - ({CGSize=dd}) stringImageSize;
 - (void) setLastItem:(BOOL)a ;
 - (void) dontDrawRightEdge:(BOOL)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
