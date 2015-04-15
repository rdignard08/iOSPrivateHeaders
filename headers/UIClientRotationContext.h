
@interface UIClientRotationContext : NSObject {

    @"UIView" _headerView;
    @"UIView" _footerView;
    @"UIView" _contentView;
    @"UIView" _snapshotTargetView;
    @"UIView" _rotatingSnapshotView;
    @"UIView" _footerStartSnapshotView;
    @"UIView" _footerEndSnapshotView;
    BOOL _headerWasHidden;
    BOOL _footerWasHidden;
    BOOL _contentWasHidden;
    BOOL _snapshotTargetWasHidden;
    BOOL _orderKeyboardInAfterRotating;
    BOOL _skipFooterRotation;
    BOOL _skipHeaderRotation;
    q _fromOrientation;
    q _toOrientation;
    d _duration;
    @"UISnapshotView" _headerSnapshotViewStart;
    @"UISnapshotView" _footerSnapshotViewStart;
    @"UISnapshotView" _contentSnapshotViewStart;
    d _contentTopAdjustmentStart;
    id _rotatingClient;
    {?="animateContentRotation"B"preserveHeight"B"avoidFadingBottomOfContent"B"skipSnapshotOfEndState"B"preventAdditveAnimations"B"contentStretchRightEdgeInset"d"edgeClip"i} _rotationSettings;
    d contentBottomInset;
    @"UIWindow" _window;
    BOOL _skipClientRotationCallbacks;
    @"NSArray" _backdropViews;
}
@property (nonatomic, assign, readonly) NSNumber* rotatingClient;
@property (nonatomic, assign, readonly) UIView* contentView;
@property (nonatomic, assign, readonly) NSNumber* duration;
@property (nonatomic, assign, readwrite) NSNumber* skipClientRotationCallbacks;
@property (nonatomic, assign, readonly) NSNumber* fromOrientation;
@property (nonatomic, assign, readonly) NSNumber* toOrientation;

 - (d) duration;
 - (void) dealloc;
 - (void) _positionHeaderView:(id)aandFooterView:(id)boutsideContentViewForInterfaceOrientation:(q)c;
 - (void) _slideHeaderView:(id)aandFooterView:(id)boffScreen:(BOOL)cforInterfaceOrientation:(q)d;
 - (id) initWithClient:(id)atoOrientation:(q)bduration:(d)candWindow:(id)d;
 - (id) rotatingClient;
 - (void) setSkipClientRotationCallbacks:(BOOL)a;
 - (void) slideHeaderViewAndFooterViewOffScreen:(BOOL)aforInterfaceOrientation:(q)b;
 - (void) setupRotationOrderingKeyboardInAfterRotation:(BOOL)a;
 - (void) disableBackdropViewUpdates:(BOOL)a;
 - (void) rotateSnapshots;
 - (q) toOrientation;
 - (void) finishFirstHalfRotation;
 - (q) fromOrientation;
 - (BOOL) skipClientRotationCallbacks;
 - (void) finishFullRotateUsingOnePartAnimation:(BOOL)a;
 - (BOOL) _isHeaderTranslucent;
 - (BOOL) _isFooterTranslucent;
 - (void) _slideFooterWithStartSnapshot:(id)aendSnapshot:(id)bduration:(d)c;
 - (id) contentView;


@end
