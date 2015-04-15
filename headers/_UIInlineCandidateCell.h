
@interface _UIInlineCandidateCell : UIView {

    @"NSString" _candidate;
    Q _index;
    @"UIFont" _font;
    {CGSize="width"d"height"d} _stringImageSize;
    BOOL _highlighted;
    id _target;
    SEL _action;
    BOOL _lastItem;
    BOOL _dontDrawRightEdge;
}

 - (void) dealloc;
 - (void) setHighlighted:(BOOL)a;
 - (Q) index;
 - (id) initWithCandidate:(id)aandIndex:(Q)bwithFontSize:(d)ctarget:(id)daction:(SEL)e;
 - ({CGSize=dd}) stringImageSize;
 - (void) setLastItem:(BOOL)a;
 - (void) dontDrawRightEdge:(BOOL)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
