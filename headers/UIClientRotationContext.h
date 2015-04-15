
@interface UIClientRotationContext : NSObject {

    UIView* _headerView;
    UIView* _footerView;
    UIView* _contentView;
    UIView* _snapshotTargetView;
    UIView* _rotatingSnapshotView;
    UIView* _footerStartSnapshotView;
    UIView* _footerEndSnapshotView;
    BOOL _headerWasHidden;
    BOOL _footerWasHidden;
    BOOL _contentWasHidden;
    BOOL _snapshotTargetWasHidden;
    BOOL _orderKeyboardInAfterRotating;
    BOOL _skipFooterRotation;
    BOOL _skipHeaderRotation;
    long long _fromOrientation;
    long long _toOrientation;
    double _duration;
    UISnapshotView* _headerSnapshotViewStart;
    UISnapshotView* _footerSnapshotViewStart;
    UISnapshotView* _contentSnapshotViewStart;
    double _contentTopAdjustmentStart;
    id _rotatingClient;
    {?="animateContentRotation"B"preserveHeight"B"avoidFadingBottomOfContent"B"skipSnapshotOfEndState"B"preventAdditveAnimations"B"contentStretchRightEdgeInset"d"edgeClip"i} _rotationSettings;
    double contentBottomInset;
    UIWindow* _window;
    BOOL _skipClientRotationCallbacks;
    NSArray* _backdropViews;
}
@property (nonatomic, assign, readonly) NSNumber* rotatingClient;
@property (nonatomic, assign, readonly) UIView* contentView;
@property (nonatomic, assign, readonly) NSNumber* duration;
@property (nonatomic, assign, readwrite) NSNumber* skipClientRotationCallbacks;
@property (nonatomic, assign, readonly) NSNumber* fromOrientation;
@property (nonatomic, assign, readonly) NSNumber* toOrientation;

 - (double) duration;
 - (void) dealloc;
 - (void) _positionHeaderView:(id)aandFooterView:(id)boutsideContentViewForInterfaceOrientation:(long long)c;
 - (void) _slideHeaderView:(id)aandFooterView:(id)boffScreen:(BOOL)cforInterfaceOrientation:(long long)d;
 - (id) initWithClient:(id)atoOrientation:(long long)bduration:(double)candWindow:(id)d;
 - (id) rotatingClient;
 - (void) setSkipClientRotationCallbacks:(BOOL)a;
 - (void) slideHeaderViewAndFooterViewOffScreen:(BOOL)aforInterfaceOrientation:(long long)b;
 - (void) setupRotationOrderingKeyboardInAfterRotation:(BOOL)a;
 - (void) disableBackdropViewUpdates:(BOOL)a;
 - (void) rotateSnapshots;
 - (long long) toOrientation;
 - (void) finishFirstHalfRotation;
 - (long long) fromOrientation;
 - (BOOL) skipClientRotationCallbacks;
 - (void) finishFullRotateUsingOnePartAnimation:(BOOL)a;
 - (BOOL) _isHeaderTranslucent;
 - (BOOL) _isFooterTranslucent;
 - (void) _slideFooterWithStartSnapshot:(id)aendSnapshot:(id)bduration:(double)c;
 - (id) contentView;


@end
