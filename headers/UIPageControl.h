
@interface UIPageControl : UIControl {

    @"NSMutableArray" _indicators;
    q _currentPage;
    q _displayedPage;
    {?="hideForSinglePage"b1"defersCurrentPageDisplay"b1} _pageControlFlags;
    @"UIImage" _currentPageImage;
    @"UIImage" _pageImage;
    q _lastUserInterfaceIdiom;
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
 - (void) _didChangeFromIdiom:(q)aonScreen:(id)btraverseHierarchy:(BOOL)c;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) _commonPageControlInit;
 - (void) setNumberOfPages:(q)a;
 - (void) setCurrentPage:(q)a;
 - (void) setCurrentPageIndicatorTintColor:(id)a;
 - (void) setPageIndicatorTintColor:(id)a;
 - (q) numberOfPages;
 - (void) _invalidateIndicators;
 - (id) _activePageIndicatorImage;
 - (id) _pageIndicatorImageForPage:(q)a;
 - (id) _pageIndicatorCurrentImageForPage:(q)a;
 - (id) _customPageIndicatorCurrentImageForPage:(q)a;
 - (id) _customPageIndicatorImageForPage:(q)a;
 - (id) _pageIndicatorImage;
 - (id) _indicatorViewEnabled:(BOOL)aindex:(q)b;
 - (void) _setCurrentPage:(q)a;
 - (void) _setDisplayedPage:(q)a;
 - (void) _updateCurrentPageDisplay;
 - (d) _indicatorSpacing;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _indicatorFrameAtIndex:(q)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _modernBounds;
 - (BOOL) _hasCustomImageForPage:(q)aenabled:(BOOL)b;
 - (void) _transitionIndicator:(id)atoEnabled:(BOOL)bindex:(q)c;
 - (id) _correctIdiomaticNameForImageNamed:(id)a;
 - (void) _modernTransitionIndicator:(id)atoEnabled:(BOOL)bindex:(q)clegible:(BOOL)d;
 - (BOOL) _shouldDrawLegibly;
 - (void) _transitionIndicator:(id)atoEnabled:(BOOL)bindex:(q)clegible:(BOOL)d;
 - (id) _indicatorViewEnabled:(BOOL)aindex:(q)blegible:(BOOL)c;
 - (void) _drawModernIndicatorInView:(id)aenabled:(BOOL)b;
 - (id) _modernIndicatorImageEnabled:(BOOL)a;
 - (void) _setLegibilitySettings:(id)a;
 - (id) _modernColorEnabled:(BOOL)a;
 - (d) _modernCornerRadius;
 - (id) _createModernIndicatorImageFromView:(id)a;
 - (q) currentPage;
 - (void) setHidesForSinglePage:(BOOL)a;
 - (BOOL) hidesForSinglePage;
 - (void) setDefersCurrentPageDisplay:(BOOL)a;
 - (BOOL) defersCurrentPageDisplay;
 - (void) updateCurrentPageDisplay;
 - ({CGSize=dd}) sizeForNumberOfPages:(q)a;
 - (q) _displayedPage;
 - (void) _setLegibilityStyle:(q)a;
 - (q) _legibilityStyle;
 - (id) currentPageIndicatorTintColor;
 - (id) pageIndicatorTintColor;
 - (id) _legibilitySettings;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
