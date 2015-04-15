
@protocol NSCopying;
@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {

    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _contentInset;
    double _arrowHeight;
    {CGSize="width"d"height"d} _preferredContentSize;
    unsigned long long _preferredArrowDirections;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _containingFrame;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _containingFrameInsets;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _targetRect;
    BOOL _constrainToTargetRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frame;
    double _offset;
    unsigned long long _arrowDirection;
    BOOL _preferLandscapeOrientations;
    BOOL _updatesEnabled;
    @"NSMutableArray" _candidates;
}
@property (nonatomic, assign, readwrite) NSNumber* contentInset;
@property (nonatomic, assign, readwrite) NSNumber* arrowHeight;
@property (nonatomic, assign, readwrite) NSNumber* preferredContentSize;
@property (nonatomic, assign, readwrite) NSNumber* preferredArrowDirections;
@property (nonatomic, assign, readwrite) NSNumber* containingFrame;
@property (nonatomic, assign, readwrite) NSNumber* containingFrameInsets;
@property (nonatomic, assign, readwrite) NSNumber* targetRect;
@property (nonatomic, assign, readwrite) NSNumber* constrainToTargetRect;
@property (nonatomic, assign, readwrite) NSNumber* preferLandscapeOrientations;
@property (nonatomic, assign, readonly) NSNumber* frame;
@property (nonatomic, assign, readonly) NSNumber* offset;
@property (nonatomic, assign, readonly) NSNumber* arrowDirection;
@property (nonatomic, assign, readwrite, _updatesEnabled, _setUpdatesEnabled:) NSNumber* updatesEnabled;
 + (id) _observationKeys;

 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - ({UIEdgeInsets=dddd}) contentInset;
 - (void) setContentInset:({UIEdgeInsets=dddd})a;
 - ({CGSize=dd}) preferredContentSize;
 - (void) setPreferredContentSize:({CGSize=dd})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) targetRect;
 - (void) setTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (unsigned long long) arrowDirection;
 - (void) _setUpdatesEnabled:(BOOL)a;
 - (void) setArrowHeight:(double)a;
 - (void) setPreferredArrowDirections:(unsigned long long)a;
 - (void) setContainingFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setContainingFrameInsets:({UIEdgeInsets=dddd})a;
 - (void) setConstrainToTargetRect:(BOOL)a;
 - (void) setPreferLandscapeOrientations:(BOOL)a;
 - (void) _updateOutputs;
 - (unsigned long long) preferredArrowDirections;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) containingFrame;
 - ({UIEdgeInsets=dddd}) containingFrameInsets;
 - (BOOL) constrainToTargetRect;
 - (BOOL) preferLandscapeOrientations;
 - ({CGSize=dd}) _popoverViewSizeForContentSize:({CGSize=dd})aarrowDirection:(unsigned long long)b;
 - (void) setProperties:(@?)a;
 - (double) arrowHeight;
 - (BOOL) _updatesEnabled;
 - (id) init;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (double) offset;
 - (id) candidates;


@end
