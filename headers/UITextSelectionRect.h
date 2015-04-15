
@interface UITextSelectionRect : NSObject {

}
@property (nonatomic, assign, readonly) NSNumber* rect;
@property (nonatomic, assign, readonly) NSNumber* writingDirection;
@property (nonatomic, assign, readonly) NSNumber* containsStart;
@property (nonatomic, assign, readonly) NSNumber* containsEnd;
@property (nonatomic, assign, readonly) NSNumber* isVertical;
@property (nonatomic, assign, readonly, getter=_isImpl) UITextSelectionRectImpl* isImpl;
 + (BOOL) startIsHorizontal:(id)a;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) startEdgeFromRects:(id)a;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) endEdgeFromRects:(id)a;
 + (BOOL) endIsHorizontal:(id)a;
 + (id) startRectFromRects:(id)a;
 + (id) endRectFromRects:(id)a;

 - (id) _isImpl;
 - (id) range;
 - (BOOL) isVertical;
 - (BOOL) containsStart;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rect;
 - (long long) writingDirection;
 - (BOOL) containsEnd;


@end
