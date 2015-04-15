
@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {

    BOOL _animationsAreValid;
    UIView _replicatorContainer;
    _UIRefreshControlModernReplicatorView _replicatorView;
    UIView _seed;
    BOOL _hasFinishedRevealing;
    UILabel _textLabel;
    BOOL _areAnimationsValid;
    double _currentPopStiffness;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setAttributedTitle:(id)a;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) setTintColor:(id)a;
 - (id) textLabel;
 - (id) _effectiveTintColor;
 - (id) attributedTitle;
 - (double) _heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
 - (double) maximumSnappingHeight;
 - (void) setCurrentPopStiffness:(double)a;
 - (void) willTransitionFromState:(int)atoState:(int)b;
 - (void) didTransitionFromState:(int)atoState:(int)b;
 - (void) setAreAnimationsValid:(BOOL)a;
 - (void) _snappingMagic;
 - (double) _currentTimeOffset;
 - (BOOL) areAnimationsValid;
 - (void) _updateTimeOffsetOfRelevantLayers;
 - (void) _resetToRevealingState;
 - (void) _spin;
 - (void) _tickDueToProgrammaticRefresh;
 - (void) _goAway;
 - (void) _cleanUpAfterRevealing;
 - (void) _setSpunAppearance;
 - (id) _effectiveTintColorWithAlpha:(double)a;
 - (void) _reveal;
 - (double) currentPopStiffness;
 - (double) _percentageShowing;
 - (double) _effectiveScrollViewHeight;
 - (void) _tick;
 - (long long) style;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
