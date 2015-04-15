
@interface UIKeyboardTransitionSlice : NSObject {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _startRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _endRect;
    UIKBCacheToken _startToken;
    UIKBCacheToken _endToken;
    BOOL _shiftContents;
    BOOL _delayCrossfade;
    int _normalization;
}
@property (atomic, assign, readwrite) NSNumber* startRect;
@property (atomic, assign, readwrite) NSNumber* endRect;
@property (atomic, retain, readwrite) UIKBCacheToken* startToken;
@property (atomic, retain, readwrite) UIKBCacheToken* endToken;
@property (atomic, assign, readwrite) NSNumber* normalization;
@property (atomic, assign, readwrite) NSNumber* delayCrossfade;
@property (atomic, assign, readonly) NSNumber* hasGeometry;
 + (id) sliceWithStart:({CGRect={CGPoint=dd}{CGSize=dd}})aend:({CGRect={CGPoint=dd}{CGSize=dd}})b;

 - (id) description;
 - (void) dealloc;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endRect;
 - (void) setStartRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEndRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) startRect;
 - (void) addStartRect:({CGRect={CGPoint=dd}{CGSize=dd}})aend:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (BOOL) hasGeometry;
 - (id) startToken;
 - (void) setStartToken:(id)a;
 - (id) endToken;
 - (void) setEndToken:(id)a;
 - (int) normalization;
 - (void) setNormalization:(int)a;
 - (BOOL) delayCrossfade;
 - (void) setDelayCrossfade:(BOOL)a;
 - (id) init;


@end
