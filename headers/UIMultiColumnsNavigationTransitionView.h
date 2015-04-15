
@protocol NSCoding;
@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding> {

    id _delegate;
    long long _transition;
    UIView _firstResponderViewToRestore;
    b1 _isTransitioning;
    double _columnWidth;
    int _columnCount;
    NSArray _fromViews;
    NSArray _toViews;
    NSArray _viewsToRemove;
    NSArray _viewsToAdd;
    NSArray _displayedViews;
    ^{__CFDictionary=} _dividerViews;
    ^{__CFDictionary=} _containerViews;
    UIColor _dividersColor;
    double _dividersWidth;
}
 + (double) defaultDurationForTransition:(long long)a;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (BOOL) isTransitioning;
 - (BOOL) _isTransitioningFromView:(id)a;
 - (void) _navigationTransitionDidStop;
 - (BOOL) transition:(long long)afromViews:(id)btoViews:(id)c;
 - (id) _dividerViewForView:(id)a;
 - (void) _removeDividerViewForView:(id)a;
 - (BOOL) transition:(long long)atoViews:(id)b;
 - (id) _containerViewForView:(id)a;
 - (void) _removeContainerViewForView:(id)a;
 - (double) columnWidth;
 - (void) setColumnWidth:(double)a;
 - (int) columnCount;
 - (void) setColumnCount:(int)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
