
@protocol UIStatusBarTinting;
@interface UISnapshotView : UIView <UIStatusBarTinting> {

    {CGSize="width"d"height"d} _contentSize;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _contentBeyondBounds;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _edgePadding;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _edgeInsets;
    {CGPoint="x"d"y"d} _contentOffset;
    UIColor* _edgePaddingColor;
    UIView* _imageView;
    NSMutableArray* _edgePaddingViews;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _snapshotRect;
    UIImageView* _shadowView;
    b1 _disableEdgeAntialiasing;
    b1 _disableVerticalStretch;
    UIColor* _statusBarTintColor;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) _snapshotView;
 - (id) _statusBarTintColor;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (void) setContentStretch:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGSize=dd}) _contentSize;
 - (id) shadowView;
 - (void) setShadowView:(id)a;
 - ({CGPoint=dd}) _contentOffset;
 - (void) captureSnapshotOfView:(id)awithSnapshotType:(int)b;
 - (void) _setStatusBarTintColor:(id)a;
 - (void) setEdgePadding:({UIEdgeInsets=dddd})a;
 - (void) setEdgePaddingColor:(id)a;
 - (void) captureSnapshotRect:({CGRect={CGPoint=dd}{CGSize=dd}})afromView:(id)bwithSnapshotType:(int)c;
 - ({UIEdgeInsets=dddd}) edgePadding;
 - (void) _setContentOffset:({CGPoint=dd})a;
 - (void) setVerticalStretchEnabled:(BOOL)a;
 - (void) setEdgeAntialiasingEnabled:(BOOL)a;
 - (void) _positionImageView;
 - ({UIEdgeInsets=dddd}) _edgePadding;
 - (void) _updateContentsRect;
 - (void) _addEdgePaddingViewInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _drawEdges:({UIEdgeInsets=dddd})awithContentSize:({CGSize=dd})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentsCenterForEdgePadding:({UIEdgeInsets=dddd})awithContentSize:({CGSize=dd})b;
 - (BOOL) isEdgeAntialiasingEnabled;
 - (BOOL) isVerticalStretchEnabled;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _snapshotRect;
 - (void) _setSnapshotRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) edgePaddingColor;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({UIEdgeInsets=dddd}) edgeInsets;
 - (void) setEdgeInsets:({UIEdgeInsets=dddd})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
