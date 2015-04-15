
@interface UIMovieScrubberEditingView : UIView {

    @"UIImageView" _leftImageView;
    @"UIImageView" _middleImageView;
    @"UIImageView" _rightImageView;
    @"NSArray" _activeImages;
    @"NSArray" _activeNoEditImages;
    @"NSArray" _inactiveImages;
    BOOL _enabled;
    BOOL _editing;
    double _edgeInset;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (BOOL) isEditing;
 - (void) setEditing:(BOOL)a;
 - (void) setEdgeInset:(double)a;
 - (void) bounce;
 - (int) handleForPoint:({CGPoint=dd})ahitOffset:(^d)b;
 - (double) edgeInset;
 - (void) _updateHandleImages;
 - (id) _handleImages;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _leftHandleRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _rightHandleRect;
 - (double) _bounceValueForFraction:(double)a;
 - (BOOL) pointInsideLeftHandle:({CGPoint=dd})a;
 - (BOOL) pointInsideRightHandle:({CGPoint=dd})a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;


@end
