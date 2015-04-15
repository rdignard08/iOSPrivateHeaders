
@interface UITableViewIndex : UIControl {

    NSArray* _titles;
    UIFont* _font;
    long long _selectedSection;
    BOOL _pastTop;
    BOOL _pastBottom;
    {CGSize="width"d"height"d} _cachedSize;
    {CGSize="width"d"height"d} _cachedSizeToFit;
    UIColor* _indexColor;
    UIColor* _indexBackgroundColor;
    UIColor* _indexTrackingBackgroundColor;
    double _topPadding;
    double _bottomPadding;
    double _verticalTextHeightEstimate;
    NSArray* _entries;
    long long _idiom;
}

 - (void) dealloc;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) setFont:(id)a;
 - (void) _willChangeToIdiom:(long long)aonScreen:(id)b;
 - (BOOL) canBecomeFocused;
 - (void) tintColorDidChange;
 - (void) setTitles:(id)a;
 - (void) setIndexColor:(id)a;
 - (void) setIndexBackgroundColor:(id)a;
 - (void) setIndexTrackingBackgroundColor:(id)a;
 - (long long) selectedSection;
 - (BOOL) pastTop;
 - (BOOL) pastBottom;
 - (id) selectedSectionTitle;
 - (unsigned long long) maximumNumberOfTitlesWithoutTruncationForHeight:(double)a;
 - (void) cancelTrackingWithEvent:(id)a;
 - (BOOL) beginTrackingWithTouch:(id)awithEvent:(id)b;
 - (BOOL) continueTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (id) titles;
 - (id) _fontForIdiom:(long long)a;
 - (void) _cacheAndMeasureTitles;
 - (void) _setIdiom:(long long)a;
 - (long long) _idiom;
 - (double) _minLineSpacingForIdiom:(long long)a;
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
