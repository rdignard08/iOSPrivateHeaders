
@protocol NSSecureCoding;
@interface _UIFocusRegionMap : NSObject <NSSecureCoding> {

    BOOL _builtRegionMap;
    NSMutableArray* _mapEntries;
    UIView* _containingView;
    {CGSize="width"d"height"d} _windowSize;
}
@property (nonatomic, assign, readwrite) NSNumber* windowSize;
@property (nonatomic, retain, readwrite) NSMutableArray* mapEntries;
@property (nonatomic, retain, readwrite) UIView* containingView;
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (id) initWithContainingView:(id)a ;
 - (void) setWindowSize:({CGSize=dd})a ;
 - (id) closestFocusableViewFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inDirection:({CGSize=dd})b includeCurrentlyFocused:(BOOL)c ;
 - (id) linearlyOrderedFocusViews;
 - (void) setContainingView:(id)a ;
 - (void) _punchHoleInMapAtFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) _buildRegionMap;
 - (id) linearlyOrderedFocusRegionMaps;
 - (void) addUnfocusableView:(id)a withFrameInWindow:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) addFocusableView:(id)a withFrameInWindow:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (id) containingView;
 - (id) debuggingImage;
 - (id) closestFocusableViewFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inDirection:({CGSize=dd})b ;
 - (id) debugQuickLookObject;
 - ({CGSize=dd}) windowSize;
 - (id) mapEntries;
 - (void) setMapEntries:(id)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
