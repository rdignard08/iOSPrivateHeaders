
@interface UIGroupTableViewCellBackground : UIView {

    i _sectionLocation;
    i _newSectionLocation;
    q _animationCount;
    q _selectionStyle;
    q _separatorStyle;
    @"UIView" _topSeparatorView;
    @"UIView" _bottomSeparatorView;
    @"UIColor" _selectionTintColor;
    d _sectionBorderWidth;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _separatorInset;
    {?="selected"b1} _groupBackgroundFlags;
}
 + (void) initialize;
 + (void) _flushCacheOnNotification:(id)a;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) _backgroundColor;
 - (void) setSeparatorStyle:(q)a;
 - ({UIEdgeInsets=dddd}) separatorInset;
 - (BOOL) isSelected;
 - (void) setSectionLocation:(i)aanimated:(BOOL)b;
 - (void) setSelected:(BOOL)a;
 - (void) setSeparatorInset:({UIEdgeInsets=dddd})a;
 - (q) separatorStyle;
 - (id) _separatorColor;
 - (id) _sectionBorderColor;
 - (void) _layoutSubviews:(BOOL)a;
 - (id) _fillColor;
 - (void) setSelectionTintColor:(id)a;
 - (void) setSelectionStyle:(q)a;
 - (q) selectionStyle;
 - (id) selectionTintColor;
 - (i) sectionLocation;
 - (id) _contentMaskLayer;
 - (id) _topShadowViewWithColor:(id)a;
 - (void) setSectionBorderWidth:(d)a;
 - (void) setSectionLocation:(i)a;
 - (id) _topShadowColor;
 - (id) _bottomShadowColor;
 - (d) sectionBorderWidth;
 - (id) _roundedRectBezierPathInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithSectionLocation:(i)bforBorder:(BOOL)ccornerRadiusAdjustment:(d)d;
 - (d) _pixelDisplayedImageHeight;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentsRect:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentsCenter:(BOOL)a;
 - (void) _updateSeparatorViews;
 - (id) _cachedImageForKey:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectForContentHeight:(d)a;
 - (void) _incrementAnimationCount;
 - (void) _decrementAnimationCount;
 - (void) _setSectionLocationAnimationDidStop;
 - (void) setSelectionTintColor:(id)alayoutSubviews:(BOOL)b;
 - (void) setBackgroundColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) backgroundColor;
 - (void) displayLayer:(id)a;


@end
