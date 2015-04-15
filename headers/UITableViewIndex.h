
@interface UITableViewIndex : UIControl {

    @"NSArray" _titles;
    @"UIFont" _font;
    q _selectedSection;
    BOOL _pastTop;
    BOOL _pastBottom;
    {CGSize="width"d"height"d} _cachedSize;
    {CGSize="width"d"height"d} _cachedSizeToFit;
    @"UIColor" _indexColor;
    @"UIColor" _indexBackgroundColor;
    @"UIColor" _indexTrackingBackgroundColor;
    d _topPadding;
    d _bottomPadding;
    d _verticalTextHeightEstimate;
    @"NSArray" _entries;
    q _idiom;
}

 - (void) dealloc;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) setFont:(id)a;
 - (void) _willChangeToIdiom:(q)aonScreen:(id)b;
 - (BOOL) canBecomeFocused;
 - (void) tintColorDidChange;
 - (void) setTitles:(id)a;
 - (void) setIndexColor:(id)a;
 - (void) setIndexBackgroundColor:(id)a;
 - (void) setIndexTrackingBackgroundColor:(id)a;
 - (q) selectedSection;
 - (BOOL) pastTop;
 - (BOOL) pastBottom;
 - (id) selectedSectionTitle;
 - (Q) maximumNumberOfTitlesWithoutTruncationForHeight:(d)a;
 - (void) cancelTrackingWithEvent:(id)a;
 - (BOOL) beginTrackingWithTouch:(id)awithEvent:(id)b;
 - (BOOL) continueTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (id) titles;
 - (id) _fontForIdiom:(q)a;
 - (void) _cacheAndMeasureTitles;
 - (void) _setIdiom:(q)a;
 - (q) _idiom;
 - (d) _minLineSpacingForIdiom:(q)a;
 - (id) _displayTitles;
 - (id) _dotImage;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _visibleBoundsForRect:({CGRect={CGPoint=dd}{CGSize=dd}})astride:(^d)b;
 - (id) indexColor;
 - (void) _selectSectionForTouch:(id)awithEvent:(id)b;
 - (id) _externalDotImage;
 - (id) indexTrackingBackgroundColor;
 - (id) indexBackgroundColor;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) font;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
