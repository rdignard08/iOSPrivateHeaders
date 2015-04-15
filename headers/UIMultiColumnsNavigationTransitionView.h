
@protocol NSCoding;
@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding> {

    id _delegate;
    q _transition;
    @"UIView" _firstResponderViewToRestore;
    b1 _isTransitioning;
    d _columnWidth;
    i _columnCount;
    @"NSArray" _fromViews;
    @"NSArray" _toViews;
    @"NSArray" _viewsToRemove;
    @"NSArray" _viewsToAdd;
    @"NSArray" _displayedViews;
    ^{__CFDictionary=} _dividerViews;
    ^{__CFDictionary=} _containerViews;
    @"UIColor" _dividersColor;
    d _dividersWidth;
}
 + (d) defaultDurationForTransition:(q)a;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (BOOL) isTransitioning;
 - (BOOL) _isTransitioningFromView:(id)a;
 - (void) _navigationTransitionDidStop;
 - (BOOL) transition:(q)afromViews:(id)btoViews:(id)c;
 - (id) _dividerViewForView:(id)a;
 - (void) _removeDividerViewForView:(id)a;
 - (BOOL) transition:(q)atoViews:(id)b;
 - (id) _containerViewForView:(id)a;
 - (void) _removeContainerViewForView:(id)a;
 - (d) columnWidth;
 - (void) setColumnWidth:(d)a;
 - (i) columnCount;
 - (void) setColumnCount:(i)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
