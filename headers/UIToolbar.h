
@protocol _UIShadowedView, _UIBackdropViewGraphicsQualityChangeDelegate, _UIBarPositioningInternal, UIBarPositioning;
@interface UIToolbar : UIView <_UIShadowedView, _UIBackdropViewGraphicsQualityChangeDelegate, _UIBarPositioningInternal, UIBarPositioning> {

    id _delegate;
    NSArray* _items;
    UIColor* _barTintColor;
    {?="barStyle"b3"mode"b2"wasEnabled"b1"downButtonSentAction"b1"barTranslucence"b3"isLocked"b1"backgroundLayoutNeedsUpdate"b1"hasCustomBackgroundView"b1} _toolbarFlags;
    ^{__CFDictionary=} _groups;
    NSArray* _buttonItems;
    long long _currentButtonGroup;
    long long _pressedTag;
    double _extraEdgeInsets;
    id _appearanceStorage;
    _UIBackdropView* _adaptiveBackdrop;
    UIImageView* _backgroundView;
    UIView* _shadowView;
    BOOL _isAdaptiveToolbarDisabled;
    BOOL _wantsLetterpressContent;
    BOOL _centerTextButtons;
    BOOL _collapsed;
    long long _barPosition;
    NSString* _backdropViewLayerGroupName;
}
 + (double) defaultHeight;
 + (double) defaultHeightForBarSize:(int)a;
 + (Class) defaultButtonClass;
 + (Class) defaultTextButtonClass;
 + (id) defaultButtonFont;
 + (float) _buttonGap;
 + (double) defaultSelectionModeHeight;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) setMode:(int)a ;
 - (void) _populateArchivedSubviews:(id)a ;
 - (void) layoutSubviews;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a ;
 - (id) _backgroundView;
 - (void) setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a ;
 - (void) _setVisualAltitude:(double)a ;
 - (void) _setVisualAltitudeBias:({CGSize=dd})a ;
 - (BOOL) isTranslucent;
 - (id) scriptingInfoWithChildren;
 - (void) setCenter:({CGPoint=dd})a ;
 - (void) invalidateIntrinsicContentSize;
 - (void) setTintColor:(id)a ;
 - (void) _didMoveFromWindow:(id)a toWindow:(id)b ;
 - ({CGSize=dd}) intrinsicContentSize;
 - (BOOL) _subclassImplementsDrawRect;
 - (BOOL) isMinibar;
 - (id) _shadowView;
 - (void) _setBackgroundView:(id)a ;
 - (void) _setBackgroundImage:(id)a mini:(id)b ;
 - (void) _setButtonBackgroundImage:(id)a mini:(id)b forStates:(unsigned long long)c ;
 - (void) _updateBackgroundColor;
 - (id) _effectiveBarTintColor;
 - (void) _effectiveBarTintColorDidChangeWithPreviousColor:(id)a ;
 - (void) _updateBackgroundImage;
 - ({CGSize=dd}) defaultSizeForOrientation:(long long)a ;
 - (void) _updateOpacity;
 - (BOOL) _wantsLetterpressContent;
 - (void) setItems:(id)a animated:(BOOL)b ;
 - (id) items;
 - (void) _setBarPosition:(long long)a ;
 - (void) addConstraint:(id)a ;
 - (void) removeConstraint:(id)a ;
 - (void) setBarStyle:(long long)a ;
 - (void) _customViewChangedForButtonItem:(id)a ;
 - (long long) barStyle;
 - (void) setTranslucent:(BOOL)a ;
 - (void) setBarTintColor:(id)a ;
 - (id) _currentCustomBackground;
 - (id) _currentCustomBackgroundRespectOversize_legacy:(^B)a ;
 - (long long) _barPosition;
 - (long long) barPosition;
 - (void) _setBackdropViewLayerGroupName:(id)a ;
 - (void) _setWantsLetterpressContent:(BOOL)a ;
 - (BOOL) _hidesShadow;
 - (void) _setHidesShadow:(BOOL)a ;
 - (id) barTintColor;
 - (id) _backdropViewLayerGroupName;
 - (void) _setShadowView:(id)a ;
 - (id) backdropView:(id)a willChangeToGraphicsQuality:(long long)b ;
 - (void) backdropView:(id)a didChangeToGraphicsQuality:(long long)b ;
 - (id) _adaptiveBackdrop;
 - (void) _setLocked:(BOOL)a ;
 - (id) backgroundImageForToolbarPosition:(long long)a barMetrics:(long long)b ;
 - (void) _finishButtonAnimation:(int)a forButton:(int)b ;
 - (BOOL) centerTextButtons;
 - (BOOL) _isInNavigationBar;
 - (void) setBarStyle:(long long)a force:(BOOL)b ;
 - (void) _setBarTintColor:(id)a force:(BOOL)b ;
 - (void) _updateItemsForNewFrame:(id)a ;
 - (id) _positionToolbarButtons:(id)a ignoringItem:(id)b resetFontScaleAdjustment:(BOOL)c actuallyRepositionButtons:(BOOL)d ;
 - (void) _positionToolbarButtons:(id)a ignoringItem:(id)b resetFontScaleAdjustment:(BOOL)c ;
 - (BOOL) _isTopBar_legacy;
 - (BOOL) _supportsAdaptiveBackground;
 - (unsigned long long) _subviewIndexAboveBackgroundView;
 - (void) _setAdaptiveToolbarDisabled:(BOOL)a ;
 - (void) setExtraEdgeInsets:(double)a ;
 - (double) extraEdgeInsets;
 - (int) mode;
 - (void) _sendAction:(id)a withEvent:(id)b ;
 - (void) animateToolbarItemIndex:(unsigned long long)a duration:(double)b target:(id)c didFinishSelector:(SEL)d ;
 - (void) setBackgroundImage:(id)a forToolbarPosition:(long long)b barMetrics:(long long)c ;
 - (void) setShadowImage:(id)a forToolbarPosition:(long long)b ;
 - (id) shadowImageForToolbarPosition:(long long)a ;
 - (BOOL) _isAdaptiveToolbarDisabled;
 - (void) setCenterTextButtons:(BOOL)a ;
 - (BOOL) isCollapsed;
 - (void) setCollapsed:(BOOL)a ;
 - (id) initInView:(id)a withFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b withItemList:(id)c ;
 - (double) _edgeMarginForBorderedItem:(BOOL)a isText:(BOOL)b ;
 - (void) _showButtons:(^i)a withCount:(int)b group:(int)c withDuration:(double)d adjustPositions:(BOOL)e skipTag:(int)f ;
 - (id) _currentButtons;
 - (void) _frameOrBoundsChangedWithVisibleSizeChange:(BOOL)a wasMinibar:(BOOL)b ;
 - (void) _frameOrCenterChanged;
 - (id) initInView:(id)a withItemList:(id)b ;
 - (id) createButtonWithDescription:(id)a ;
 - (void) positionButtons:(id)a tags:(^i)b count:(int)c group:(int)d ;
 - (void) _buttonBarFinishedAnimating;
 - (void) showButtons:(^i)a withCount:(int)b withDuration:(double)c ;
 - (void) registerButtonGroup:(int)a withButtons:(^i)b withCount:(int)c ;
 - (void) showButtonGroup:(int)a withDuration:(double)b ;
 - (int) currentButtonGroup;
 - (void) getVisibleButtonTags:(^i)a count:(^I)b maxItems:(unsigned int)c ;
 - (void) setButtonBarTrackingMode:(int)a ;
 - (void) setBadgeValue:(id)a forButton:(int)b ;
 - (void) setBadgeGlyph:(id)a forButton:(int)b ;
 - (void) setBadgeAnimated:(BOOL)a forButton:(int)b ;
 - (BOOL) onStateForButton:(int)a ;
 - (void) setOnStateForButton:(BOOL)a forButton:(int)b ;
 - (void) animateWithDuration:(float)a forButton:(int)b ;
 - (id) buttonItems;
 - (void) setButtonItems:(id)a ;
 - (void) _setForceTopBarAppearance:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameOfBarButtonItem:(id)a ;
 - (void) _layoutBackgroundViewConsideringStatusBar;
 - (void) _cleanupAdaptiveBackdrop;
 - (id) _repositionedItemsFromItems:(id)a withBarButtonFrames:(^@)b withHitRects:(^@)c buttonIndexes:(^@)d textButtonIndexes:(^@)e ;
 - (BOOL) _isLocked;
 - (id) _customToolbarAppearance;
 - (void) _buttonDownDelayed:(id)a ;
 - (void) _adjustButtonPressed:(id)a ;
 - (void) _buttonDown:(id)a ;
 - (void) _buttonUp:(id)a ;
 - (void) _buttonCancel:(id)a ;
 - (id) _buttonWithDescription:(id)a ;
 - (id) _descriptionForTag:(int)a ;
 - (void) _updateScriptingInfo:(id)a view:(id)b ;
 - (id) _buttonName:(id)a withType:(int)b ;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (double) _autolayoutSpacingAtEdge:(int)a inContainer:(id)b ;
 - (double) _autolayoutSpacingAtEdge:(int)a nextToNeighbor:(id)b ;
 - (BOOL) _hasCustomAutolayoutNeighborSpacing;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setAutoresizingMask:(unsigned long long)a ;
 - (void) setItems:(id)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
