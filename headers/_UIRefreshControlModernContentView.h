
@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {

    BOOL _animationsAreValid;
    @"UIView" _replicatorContainer;
    @"_UIRefreshControlModernReplicatorView" _replicatorView;
    @"UIView" _seed;
    BOOL _hasFinishedRevealing;
    @"UILabel" _textLabel;
    BOOL _areAnimationsValid;
    d _currentPopStiffness;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setAttributedTitle:(id)a;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) setTintColor:(id)a;
 - (id) textLabel;
 - (id) _effectiveTintColor;
 - (id) attributedTitle;
 - (d) _heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
 - (d) maximumSnappingHeight;
 - (void) setCurrentPopStiffness:(d)a;
 - (void) willTransitionFromState:(i)atoState:(i)b;
 - (void) didTransitionFromState:(i)atoState:(i)b;
 - (void) setAreAnimationsValid:(BOOL)a;
 - (void) _snappingMagic;
 - (d) _currentTimeOffset;
 - (BOOL) areAnimationsValid;
 - (void) _updateTimeOffsetOfRelevantLayers;
 - (void) _resetToRevealingState;
 - (void) _spin;
 - (void) _tickDueToProgrammaticRefresh;
 - (void) _goAway;
 - (void) _cleanUpAfterRevealing;
 - (void) _setSpunAppearance;
 - (id) _effectiveTintColorWithAlpha:(d)a;
 - (void) _reveal;
 - (d) currentPopStiffness;
 - (d) _percentageShowing;
 - (d) _effectiveScrollViewHeight;
 - (void) _tick;
 - (q) style;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
