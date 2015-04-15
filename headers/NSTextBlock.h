
@protocol NSCoding, NSCopying;
@interface NSTextBlock : NSObject <NSCoding, NSCopying> {

    ^v _propVals;
    Q _propMask;
    Q _typeMask;
    id _primParamVal;
    id _otherParamVals;
    ^v _blockPrimary;
    ^v _blockSecondary;
}
 + (void) initialize;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) drawBackgroundWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)bcharacterRange:({_NSRange=QQ})clayoutManager:(id)d;
 - (d) widthForLayer:(q)aedge:(Q)b;
 - (d) valueForDimension:(Q)a;
 - (Q) widthValueTypeForLayer:(q)aedge:(Q)b;
 - (Q) valueTypeForDimension:(Q)a;
 - (void) _destroyFloatStorage;
 - (void) _createFloatStorage;
 - (void) _takeValuesFromTextBlock:(id)a;
 - (void) _setValue:(d)atype:(Q)bforParameter:(Q)c;
 - (d) _valueForParameter:(Q)a;
 - (Q) _valueTypeForParameter:(Q)a;
 - (void) setValue:(d)atype:(Q)bforDimension:(Q)c;
 - (void) setWidth:(d)atype:(Q)bforLayer:(q)cedge:(Q)d;
 - (void) setBorderColor:(id)aforEdge:(Q)b;
 - (Q) verticalAlignment;
 - (id) borderColorForEdge:(Q)a;
 - (void) setContentWidth:(d)atype:(Q)b;
 - (d) contentWidth;
 - (Q) contentWidthValueType;
 - (void) setWidth:(d)atype:(Q)bforLayer:(q)c;
 - (void) setVerticalAlignment:(Q)a;
 - (void) setBackgroundColor:(id)a;
 - (void) setBorderColor:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForLayoutAtPoint:({CGPoint=dd})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})btextContainer:(id)ccharacterRange:({_NSRange=QQ})d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsRectForContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})btextContainer:(id)ccharacterRange:({_NSRange=QQ})d;
 - (id) _attributeDescription;
 - (id) backgroundColor;


@end
