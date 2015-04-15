
@interface UITabBarButton : UIControl {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _hitRect;
    @"UIView" _info;
    @"UIVisualEffectView" _vibrancyEffectView;
    @"UITabBarButtonLabel" _label;
    @"_UIBadgeView" _badge;
    @"UITabBarSelectionIndicatorView" _selectedIndicator;
    BOOL _selected;
    BOOL _barHeight;
    BOOL _badgeAnimated;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _infoInsets;
    {UIOffset="horizontal"d"vertical"d} _selectedInfoOffset;
    {UIOffset="horizontal"d"vertical"d} _infoOffset;
    @"UIImage" _customSelectedIndicatorImage;
    @"NSValue" _labelOffsetValue;
    @"NSMutableDictionary" _buttonTintColorsForState;
    @"NSMutableDictionary" _contentTintColorsForState;
    BOOL _showsHighlightedState;
    BOOL _centerAllContents;
    Class _appearanceGuideClass;
    @"UIColor" _unselectedTintColor;
}
 + (id) _defaultLabelColor;

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (BOOL) pointInside:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _responderSelectionRectForWindow:(id)a;
 - (void) focusedViewDidChange;
 - (BOOL) canBecomeFocused;
 - (Class) _appearanceGuideClass;
 - (id) _scriptingInfo;
 - (void) setHighlighted:(BOOL)a;
 - (void) _UIAppearance_setTitleTextAttributes:(id)aforState:(Q)b;
 - (void) _setTitleTextAttributes:(id)aforState:(Q)b;
 - (void) _setAppearanceGuideClass:(Class)a;
 - (void) _positionBadge;
 - (void) _badgeAnimationDidStop:(id)afinished:(id)b;
 - (void) _setBadgeValue:(id)a;
 - (void) _setBadgeAnimated:(BOOL)a;
 - (void) _setBarHeight:(f)a;
 - (BOOL) _useBarHeight;
 - (id) _contentTintColorForState:(Q)a;
 - (void) _setUnselectedTintColor:(id)a;
 - (void) _UIAppearance_setTitlePositionAdjustment:({UIOffset=dd})a;
 - (void) _setTitlePositionAdjustment:({UIOffset=dd})a;
 - (void) _applyTabBarButtonAppearanceStorage:(id)awithTaggedSelectors:(id)b;
 - (id) _unselectedTintColor;
 - (void) _setContentTintColor:(id)aforState:(Q)b;
 - (void) _setUpSelectedIndicatorViewIfNeeded;
 - (void) _updateSelectedIndicatorView;
 - (void) _setSelected:(BOOL)a;
 - (void) _updateToMatchCurrentState;
 - (BOOL) _showsHighlightedState;
 - (id) _buttonTintColorForState:(Q)a;
 - (void) _setUnselectedTintColor:(id)aforceLabelToConform:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForSelectedIndicator;
 - (void) _updateInfoFrame;
 - (void) _showSelectedIndicator:(BOOL)achangeSelection:(BOOL)b;
 - (void) _setShowsHighlightedState:(BOOL)a;
 - (id) tabBarButtonLabel;
 - (id) _selectedIndicatorView;
 - (id) initWithImage:(id)aselectedImage:(id)blabel:(id)cwithInsets:({UIEdgeInsets=dddd})d;
 - (void) _setTabBarHitRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _tabBarHitRect;
 - (id) _swappableImageView;
 - (void) _setSelectedInfoOffset:({UIOffset=dd})a;
 - (void) _setInfoOffset:({UIOffset=dd})a;
 - (void) _setCustomSelectedIndicatorImage:(id)a;
 - (void) _setLabelHidden:(BOOL)a;
 - ({UIOffset=dd}) _titlePositionAdjustment;
 - (void) _setButtonTintColor:(id)aforState:(Q)b;
 - (id) labelOffsetValue;
 - (void) setLabelOffsetValue:(id)a;
 - (BOOL) _centerAllContents;
 - (void) _setCenterAllContents:(BOOL)a;
 - (void) setImage:(id)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _isSelected;
 - (void) setEnabled:(BOOL)a;


@end
