
@interface UIKBRenderFactoryLayoutSegment : NSObject {

    i _rectCount;
    [3{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}] _rects;
    [3i] _triangleCorners;
    i _edgeCount;
    [3Q] _edges;
    [3@"NSString"] _cachedKeyNames;
    BOOL _requireAllMatches;
    i _states;
    @"UIKBRenderTraits" _traits;
}
@property (nonatomic, assign, readonly) UIKBRenderTraits* traits;
@property (nonatomic, assign, readwrite) NSNumber* keyStates;
@property (nonatomic, assign, readwrite) NSNumber* requireAllMatches;
 + (id) segmentWithTraits:(id)a;

 - (void) dealloc;
 - (void) setKeyStates:(i)a;
 - (void) addLayoutRect:({CGRect={CGPoint=dd}{CGSize=dd}})aasTriangle:(i)b;
 - (void) setRequireAllMatches:(BOOL)a;
 - (void) addRelativeLayoutRectFromEdge:(Q)aofCachedKey:(id)b;
 - (id) initWithTraits:(id)a;
 - (BOOL) requireAllMatches;
 - (BOOL) containsPoint:({CGPoint=dd})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})bwithKeyplane:(id)c;
 - (i) keyStates;
 - (id) traits;


@end
