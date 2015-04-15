
@protocol NSCopying;
@interface WebSelectionRect : NSObject <NSCopying> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_rect;
    i m_writingDirection;
    BOOL m_isLineBreak;
    BOOL m_isFirstOnLine;
    BOOL m_isLastOnLine;
    BOOL m_containsStart;
    BOOL m_containsEnd;
    BOOL m_isInFixedPosition;
    BOOL m_isHorizontal;
}
@property (nonatomic, assign, readwrite) NSNumber* rect;
@property (nonatomic, assign, readwrite) NSNumber* writingDirection;
@property (nonatomic, assign, readwrite) NSNumber* isLineBreak;
@property (nonatomic, assign, readwrite) NSNumber* isFirstOnLine;
@property (nonatomic, assign, readwrite) NSNumber* isLastOnLine;
@property (nonatomic, assign, readwrite) NSNumber* containsStart;
@property (nonatomic, assign, readwrite) NSNumber* containsEnd;
@property (nonatomic, assign, readwrite) NSNumber* isInFixedPosition;
@property (nonatomic, assign, readwrite) NSNumber* isHorizontal;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) startEdge:(id)a;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) endEdge:(id)a;
 + (id) selectionRect;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) init;
 - (BOOL) containsStart;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rect;
 - (BOOL) isHorizontal;
 - (i) writingDirection;
 - (BOOL) containsEnd;
 - (void) setRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setWritingDirection:(i)a;
 - (void) setIsLineBreak:(BOOL)a;
 - (void) setIsFirstOnLine:(BOOL)a;
 - (void) setIsLastOnLine:(BOOL)a;
 - (void) setContainsStart:(BOOL)a;
 - (void) setContainsEnd:(BOOL)a;
 - (void) setIsInFixedPosition:(BOOL)a;
 - (void) setIsHorizontal:(BOOL)a;
 - (BOOL) isLineBreak;
 - (BOOL) isFirstOnLine;
 - (BOOL) isLastOnLine;
 - (BOOL) isInFixedPosition;


@end
