
@protocol UISplittableInputView;
@interface UIInputView : UIView <UISplittableInputView> {

    long long _style;
    UIKBRenderConfig* _renderConfig;
    BOOL _suppressBackgroundStyling;
    BOOL _disableSplitSupport;
    _UIInputViewContent* _leftContentView;
    _UIInputViewContent* _rightContentView;
    double _contentRatio;
    {CGSize="width"d"height"d} _leftContentSize;
    {CGSize="width"d"height"d} _rightContentSize;
    {CGSize="width"d"height"d} _defaultSize;
    double _gapWidth;
    double _leftOffset;
    BOOL _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    double _transitionRatio;
    UIImage* _mergedImage;
    UIImage* _splitImage;
    NSMutableDictionary* _mergedSliceMap;
    NSMutableDictionary* _splitSliceMap;
    NSArray* _visibleLayers;
    CALayer* _transitionLayer;
}
 + (void) _setupAppearanceIfNecessary;

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) _isTransitioning;
 - (id) tintColor;
 - (void) _setRenderConfig:(id)a;
 - (int) _clipCornersOfView:(id)a;
 - (void) _beginSplitTransitionIfNeeded:(double)agapWidth:(double)b;
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
 - (void) _setLeftOffset:(double)agapWidth:(double)b;
 - (BOOL) _isToolbars;
 - (void) _setProgress:(double)aboundedBy:(double)b;
 - (void) setContentRatio:(double)a;
 - (id) leftContentView;
 - (id) rightContentView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})ainputViewStyle:(long long)b;
 - (void) _setDisableSplitSupport:(BOOL)a;
 - (void) _setNeedsContentSizeUpdate;
 - (double) _additionalClipHeight;
 - (void) _updateClipCorners;
 - (double) contentRatio;
 - ({CGSize=dd}) _defaultSize;
 - (void) _updateWithSize:({CGSize=dd})a;
 - (id) _splitBorderedBackgroundWithCorners:(unsigned long long)a;
 - (id) _toolbarBorderedBackground;
 - (BOOL) _suppressBackgroundStyling;
 - (void) _setSuppressBackgroundStyling:(BOOL)a;
 - (BOOL) _disableSplitSupport;
 - (void) setInputViewStyle:(long long)a;
 - (long long) inputViewStyle;
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
