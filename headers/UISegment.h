
@interface UISegment : UIImageView {

    UIView* _info;
    _UISegmentedControlAppearanceStorage* _appearanceStorage;
    double _width;
    {CGSize="width"d"height"d} _contentOffset;
    long long _barStyle;
    unsigned long long _rightSegmentState;
    NSString* _badgeValue;
    _UIBadgeView* _badgeView;
    id _objectValue;
    {?="style"b3"size"b2"selected"b1"highlighted"b1"showDivider"b1"hasImage"b1"position"b3"autosizeText"b1"isMomentary"b1"wasSelected"b1"needsBackgroundAndContentViewUpdate"b1} _segmentFlags;
    NSArray* _infoConstraints;
    double _requestedScaleFactor;
}
 + (id) _backgroundImageWithStorage:(id)astyle:(long long)bmini:(BOOL)cstate:(unsigned long long)dposition:(unsigned int)edrawMode:(^i)fdefaultBlock:(@?)g;

 - (void) dealloc;
 - (void) _populateArchivedSubviews:(id)a ;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (void) layoutSubviews;
 - ({CGSize=dd}) contentSize;
 - (void) setContentOffset:({CGSize=dd})a ;
 - (BOOL) useBlockyMagnificationInClassic;
 - (id) _tintColorArchivingKey;
 - (void) setTintColor:(id)a ;
 - (void) tintColorDidChange;
 - (id) hitTest:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - (void) setHighlighted:(BOOL)a ;
 - (void) setControlSize:(int)a ;
 - (void) setBarStyle:(long long)a ;
 - (BOOL) isHighlighted;
 - (int) controlSize;
 - (BOOL) isSelected;
 - (void) setSelected:(BOOL)a ;
 - (void) updateConstraints;
 - (void) setBadgeValue:(id)a ;
 - (id) badgeValue;
 - (void) insertDividerView;
 - (void) _updateTextColors;
 - (void) setObjectValue:(id)a ;
 - (void) _commonSegmentInit;
 - (id) objectValue;
 - (BOOL) _isInMiniBar;
 - (unsigned long long) _segmentState;
 - (BOOL) _shouldUsePadMomentaryAppearance;
 - (void) setNeedsBackgroundAndContentViewUpdate;
 - (id) _dividerImageIsCustom:(^B)a ;
 - (id) _dividerImage;
 - (void) _updateBackgroundAndContentViews;
 - (void) updateDividerViewForChangedSegment:(id)a ;
 - (void) _positionInfo;
 - (BOOL) isMomentary;
 - (BOOL) _hasSelectedColor;
 - (void) updateMasking;
 - (id) _attributedTextForState:(unsigned long long)a selected:(BOOL)b ;
 - (id) disabledTextColor;
 - (id) _currentOptionsStyleTextColor;
 - (id) _currentOptionsStyleTextShadowColor;
 - (void) _setEnabledAppearance:(BOOL)a ;
 - (void) _invalidateInfoConstraints;
 - ({UIEdgeInsets=dddd}) _paddingInsets;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGSize=dd}) _maximumTextSize;
 - (double) _barHeight;
 - (void) _setInfoConstraints:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentRect;
 - (void) _updateBackgroundAndContentViewsIfNeeded;
 - (id) initWithInfo:(id)a style:(long long)b size:(int)c barStyle:(long long)d tintColor:(id)e appearanceStorage:(id)f position:(unsigned int)g autosizeText:(BOOL)h ;
 - (void) updateForAppearance:(id)a style:(int)b ;
 - (void) setWasSelected:(BOOL)a ;
 - (void) setAutosizeText:(BOOL)a ;
 - (id) badgeView;
 - (void) setMomentary:(BOOL)a ;
 - (BOOL) showDivider;
 - (void) setShowDivider:(BOOL)a ;
 - (void) animateAdd:(BOOL)a ;
 - (void) animateRemoveForWidth:(double)a ;
 - (void) _positionInfoWithoutAnimation;
 - (void) setRequestedScaleFactor:(double)a ;
 - (void) _forceInfoDisplay;
 - (id) infoName;
 - (double) _idealWidth;
 - (id) viewForBaselineLayout;
 - (id) _infoConstraints;
 - (double) requestedScaleFactor;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setPosition:(unsigned int)a ;
 - (id) label;
 - (void) setEnabled:(BOOL)a ;


@end
