
@protocol NSCopying;
@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {

    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _contentInset;
    d _arrowHeight;
    {CGSize="width"d"height"d} _preferredContentSize;
    Q _preferredArrowDirections;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _containingFrame;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _containingFrameInsets;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _targetRect;
    BOOL _constrainToTargetRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frame;
    d _offset;
    Q _arrowDirection;
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
 - (Q) arrowDirection;
 - (void) _setUpdatesEnabled:(BOOL)a;
 - (void) setArrowHeight:(d)a;
 - (void) setPreferredArrowDirections:(Q)a;
 - (void) setContainingFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setContainingFrameInsets:({UIEdgeInsets=dddd})a;
 - (void) setConstrainToTargetRect:(BOOL)a;
 - (void) setPreferLandscapeOrientations:(BOOL)a;
 - (void) _updateOutputs;
 - (Q) preferredArrowDirections;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) containingFrame;
 - ({UIEdgeInsets=dddd}) containingFrameInsets;
 - (BOOL) constrainToTargetRect;
 - (BOOL) preferLandscapeOrientations;
 - ({CGSize=dd}) _popoverViewSizeForContentSize:({CGSize=dd})aarrowDirection:(Q)b;
 - (void) setProperties:(@?)a;
 - (d) arrowHeight;
 - (BOOL) _updatesEnabled;
 - (id) init;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (d) offset;
 - (id) candidates;


@end
