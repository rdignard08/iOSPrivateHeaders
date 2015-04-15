
@interface UIKeyboardSliceSet : NSObject {

    @"NSString" _ssid;
    @"NSMutableSet" _slices;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _startRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _endRect;
    d _leftWidth;
    d _rightWidth;
    d _mergePoint;
    @"NSMutableDictionary" _controlKeys;
}
@property (atomic, assign, readonly) NSMutableSet* slices;
@property (atomic, retain, readwrite) NSString* sliceSetID;
@property (atomic, assign, readwrite) NSNumber* startRect;
@property (atomic, assign, readwrite) NSNumber* endRect;
@property (atomic, assign, readwrite) NSNumber* leftWidth;
@property (atomic, assign, readwrite) NSNumber* rightWidth;
@property (atomic, assign, readwrite) NSNumber* mergePoint;
@property (atomic, assign, readwrite) NSMutableDictionary* controlKeys;
 + (id) sliceSetWithDictionaryRepresenation:(id)a;

 - (id) description;
 - (void) dealloc;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endRect;
 - (id) sliceSetID;
 - (id) initWithSliceID:(id)a;
 - (void) setStartRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEndRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setLeftWidth:(d)a;
 - (void) setRightWidth:(d)a;
 - (void) addSlice:(id)a;
 - (id) slices;
 - (void) setSliceSetID:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) startRect;
 - (d) leftWidth;
 - (d) rightWidth;
 - (d) mergePoint;
 - (void) setMergePoint:(d)a;
 - (id) controlKeys;
 - (void) setControlKeys:(id)a;


@end
