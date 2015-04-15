
@interface UIPageControl : UIControl {

    @"NSMutableArray" _indicators;
    long long _currentPage;
    long long _displayedPage;
    {?="hideForSinglePage"b1"defersCurrentPageDisplay"b1} _pageControlFlags;
    @"UIImage" _currentPageImage;
    @"UIImage" _pageImage;
    long long _lastUserInterfaceIdiom;
    @"UIColor" _currentPageIndicatorTintColor;
    @"UIColor" _pageIndicatorTintColor;
    @"_UILegibilitySettings" _legibilitySettings;
}

 - (void) dealloc;
 - (void) _populateArchivedSubviews:(id)a;
 - (void) layoutSubviews;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedWidth;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - ({CGSize=dd}) intrinsicContentSize;
 - (void) _didChangeFromIdiom:(long long)aonScreen:(id)btraverseHierarchy:(BOOL)c;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) _commonPageControlInit;
 - (void) setNumberOfPages:(long long)a;
 - (void) setCurrentPage:(long long)a;
 - (void) setCurrentPageIndicatorTintColor:(id)a;
 - (void) setPageIndicatorTintColor:(id)a;
 - (long long) numberOfPages;
 - (void) _invalidateIndicators;
 - (id) _activePageIndicatorImage;
 - (id) _pageIndicatorImageForPage:(long long)a;
 - (id) _pageIndicatorCurrentImageForPage:(long long)a;
 - (id) _customPageIndicatorCurrentImageForPage:(long long)a;
 - (id) _customPageIndicatorImageForPage:(long long)a;
 - (id) _pageIndicatorImage;
 - (id) _indicatorViewEnabled:(BOOL)aindex:(long long)b;
 - (void) _setCurrentPage:(long long)a;
 - (void) _setDisplayedPage:(long long)a;
 - (void) _updateCurrentPageDisplay;
 - (double) _indicatorSpacing;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _indicatorFrameAtIndex:(long long)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _modernBounds;
 - (BOOL) _hasCustomImageForPage:(long long)aenabled:(BOOL)b;
 - (void) _transitionIndicator:(id)atoEnabled:(BOOL)bindex:(long long)c;
 - (id) _correctIdiomaticNameForImageNamed:(id)a;
 - (void) _modernTransitionIndicator:(id)atoEnabled:(BOOL)bindex:(long long)clegible:(BOOL)d;
 - (BOOL) _shouldDrawLegibly;
 - (void) _transitionIndicator:(id)atoEnabled:(BOOL)bindex:(long long)clegible:(BOOL)d;
 - (id) _indicatorViewEnabled:(BOOL)aindex:(long long)blegible:(BOOL)c;
 - (void) _drawModernIndicatorInView:(id)aenabled:(BOOL)b;
 - (id) _modernIndicatorImageEnabled:(BOOL)a;
 - (void) _setLegibilitySettings:(id)a;
 - (id) _modernColorEnabled:(BOOL)a;
 - (double) _modernCornerRadius;
 - (id) _createModernIndicatorImageFromView:(id)a;
 - (long long) currentPage;
 - (void) setHidesForSinglePage:(BOOL)a;
 - (BOOL) hidesForSinglePage;
 - (void) setDefersCurrentPageDisplay:(BOOL)a;
 - (BOOL) defersCurrentPageDisplay;
 - (void) updateCurrentPageDisplay;
 - ({CGSize=dd}) sizeForNumberOfPages:(long long)a;
 - (long long) _displayedPage;
 - (void) _setLegibilityStyle:(long long)a;
 - (long long) _legibilityStyle;
 - (id) currentPageIndicatorTintColor;
 - (id) pageIndicatorTintColor;
 - (id) _legibilitySettings;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
