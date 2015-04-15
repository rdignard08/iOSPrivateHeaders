
@interface _UIReplicantView : UIView {

    _UISlotIdWrapper _slotIdWrapper;
    UIScreen _screen;
    {CGSize="width"d"height"d} _snapshotSize;
    _UIReplicantContentView _contentView;
}
 + (Class) layerClass;
 + (id) snapshotWithView:(id)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})bcapInsets:({UIEdgeInsets=dddd})cdefer:(BOOL)d;
 + (id) _pendingSnapshotOfTarget:(id)asnapshotBlock:(@?)b;
 + (id) snapshotContext;
 + (id) snapshotWindows:(id)awithRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 + (id) snapshotWithScreen:(id)adefer:(BOOL)b;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) _copyResizableSnapshotViewFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithCapInsets:({UIEdgeInsets=dddd})b;
 - ({CGAffineTransform=dddddd}) _appliedTransform;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
