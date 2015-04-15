
@interface UIGroupTableViewCellBackground : UIView {

    int _sectionLocation;
    int _newSectionLocation;
    long long _animationCount;
    long long _selectionStyle;
    long long _separatorStyle;
    UIView* _topSeparatorView;
    UIView* _bottomSeparatorView;
    UIColor* _selectionTintColor;
    double _sectionBorderWidth;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _separatorInset;
    selected* _groupBackgroundFlags;
}
 + (void) initialize;
 + (void) _flushCacheOnNotification:(id)a;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) _backgroundColor;
 - (void) setSeparatorStyle:(long long)a ;
 - ({UIEdgeInsets=dddd}) separatorInset;
 - (BOOL) isSelected;
 - (void) setSectionLocation:(int)a animated:(BOOL)b ;
 - (void) setSelected:(BOOL)a ;
 - (void) setSeparatorInset:({UIEdgeInsets=dddd})a ;
 - (long long) separatorStyle;
 - (id) _separatorColor;
 - (id) _sectionBorderColor;
 - (void) _layoutSubviews:(BOOL)a ;
 - (id) _fillColor;
 - (void) setSelectionTintColor:(id)a ;
 - (void) setSelectionStyle:(long long)a ;
 - (long long) selectionStyle;
 - (id) selectionTintColor;
 - (int) sectionLocation;
 - (id) _contentMaskLayer;
 - (id) _topShadowViewWithColor:(id)a ;
 - (void) setSectionBorderWidth:(double)a ;
 - (void) setSectionLocation:(int)a ;
 - (id) _topShadowColor;
 - (id) _bottomShadowColor;
 - (double) sectionBorderWidth;
 - (id) _roundedRectBezierPathInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a withSectionLocation:(int)b forBorder:(BOOL)c cornerRadiusAdjustment:(double)d ;
 - (double) _pixelDisplayedImageHeight;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentsRect:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentsCenter:(BOOL)a ;
 - (void) _updateSeparatorViews;
 - (id) _cachedImageForKey:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectForContentHeight:(double)a ;
 - (void) _incrementAnimationCount;
 - (void) _decrementAnimationCount;
 - (void) _setSectionLocationAnimationDidStop;
 - (void) setSelectionTintColor:(id)a layoutSubviews:(BOOL)b ;
 - (void) setBackgroundColor:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) backgroundColor;
 - (void) displayLayer:(id)a ;


@end
