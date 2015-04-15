
@interface UIKBRenderFactoryLayoutSegment : NSObject {

    int _rectCount;
    [3{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}] _rects;
    [3i] _triangleCorners;
    int _edgeCount;
    [3Q] _edges;
    NSString* _cachedKeyNames;
    BOOL _requireAllMatches;
    int _states;
    UIKBRenderTraits* _traits;
}
@property (nonatomic, assign, readonly) UIKBRenderTraits* traits;
@property (nonatomic, assign, readwrite) NSNumber* keyStates;
@property (nonatomic, assign, readwrite) NSNumber* requireAllMatches;
 + (id) segmentWithTraits:(id)a;

 - (void) dealloc;
 - (void) setKeyStates:(int)a;
 - (void) addLayoutRect:({CGRect={CGPoint=dd}{CGSize=dd}})aasTriangle:(int)b;
 - (void) setRequireAllMatches:(BOOL)a;
 - (void) addRelativeLayoutRectFromEdge:(unsigned long long)aofCachedKey:(id)b;
 - (id) initWithTraits:(id)a;
 - (BOOL) requireAllMatches;
 - (BOOL) containsPoint:({CGPoint=dd})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})bwithKeyplane:(id)c;
 - (int) keyStates;
 - (id) traits;


@end
