
@protocol UISplittableInputView;
@interface UIInputView : UIView <UISplittableInputView> {

    q _style;
    @"UIKBRenderConfig" _renderConfig;
    BOOL _suppressBackgroundStyling;
    BOOL _disableSplitSupport;
    @"_UIInputViewContent" _leftContentView;
    @"_UIInputViewContent" _rightContentView;
    d _contentRatio;
    {CGSize="width"d"height"d} _leftContentSize;
    {CGSize="width"d"height"d} _rightContentSize;
    {CGSize="width"d"height"d} _defaultSize;
    d _gapWidth;
    d _leftOffset;
    BOOL _isTransitioning;
    d _transitionGap;
    d _transitionLeftOffset;
    d _transitionRatio;
    @"UIImage" _mergedImage;
    @"UIImage" _splitImage;
    @"NSMutableDictionary" _mergedSliceMap;
    @"NSMutableDictionary" _splitSliceMap;
    @"NSArray" _visibleLayers;
    @"CALayer" _transitionLayer;
}
 + (void) _setupAppearanceIfNecessary;

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) _isTransitioning;
 - (id) tintColor;
 - (void) _setRenderConfig:(id)a;
 - (i) _clipCornersOfView:(id)a;
 - (void) _beginSplitTransitionIfNeeded:(d)agapWidth:(d)b;
 - (void) _endSplitTransitionIfNeeded:(BOOL)a;
 - (BOOL) _isSplit;
 - ({CGSize=dd}) leftContentViewSize;
 - ({CGSize=dd}) rightContentViewSize;
 - (BOOL) _supportsSplit;
 - (void) layoutMergedSubviews;
 - (void) updateMergedSubviewConstraints;
 - (void) layoutSplitSubviewsWithLeftContentSize:({CGSize=dd})arightContentSize:({CGSize=dd})b;
 - (void) updateSplitSubviewContraintsWithLeftContentSize:({CGSize=dd})arightContentSize:({CGSize=dd})b;
 - (void) willBeginSplitTransition;
 - (void) didEndSplitTransition;
 - (void) _setLeftOffset:(d)agapWidth:(d)b;
 - (BOOL) _isToolbars;
 - (void) _setProgress:(d)aboundedBy:(d)b;
 - (void) setContentRatio:(d)a;
 - (id) leftContentView;
 - (id) rightContentView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})ainputViewStyle:(q)b;
 - (void) _setDisableSplitSupport:(BOOL)a;
 - (void) _setNeedsContentSizeUpdate;
 - (d) _additionalClipHeight;
 - (void) _updateClipCorners;
 - (d) contentRatio;
 - ({CGSize=dd}) _defaultSize;
 - (void) _updateWithSize:({CGSize=dd})a;
 - (id) _splitBorderedBackgroundWithCorners:(Q)a;
 - (id) _toolbarBorderedBackground;
 - (BOOL) _suppressBackgroundStyling;
 - (void) _setSuppressBackgroundStyling:(BOOL)a;
 - (BOOL) _disableSplitSupport;
 - (void) setInputViewStyle:(q)a;
 - (q) inputViewStyle;
 - (void) setLeftContentViewSize:({CGSize=dd})a;
 - (void) setRightContentViewSize:({CGSize=dd})a;
 - (id) _mergedImage;
 - (void) set_mergedImage:(id)a;
 - (id) _splitImage;
 - (void) set_splitImage:(id)a;
 - (id) _mergedSliceMap;
 - (void) set_mergedSliceMap:(id)a;
 - (id) _splitSliceMap;
 - (void) set_splitSliceMap:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
