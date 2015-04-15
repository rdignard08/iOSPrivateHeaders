
@protocol NSCoding, NSCopying;
@interface NSTextBlock : NSObject <NSCoding, NSCopying> {

    ^v _propVals;
    unsigned long long _propMask;
    unsigned long long _typeMask;
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
 - (double) widthForLayer:(long long)aedge:(unsigned long long)b;
 - (double) valueForDimension:(unsigned long long)a;
 - (unsigned long long) widthValueTypeForLayer:(long long)aedge:(unsigned long long)b;
 - (unsigned long long) valueTypeForDimension:(unsigned long long)a;
 - (void) _destroyFloatStorage;
 - (void) _createFloatStorage;
 - (void) _takeValuesFromTextBlock:(id)a;
 - (void) _setValue:(double)atype:(unsigned long long)bforParameter:(unsigned long long)c;
 - (double) _valueForParameter:(unsigned long long)a;
 - (unsigned long long) _valueTypeForParameter:(unsigned long long)a;
 - (void) setValue:(double)atype:(unsigned long long)bforDimension:(unsigned long long)c;
 - (void) setWidth:(double)atype:(unsigned long long)bforLayer:(long long)cedge:(unsigned long long)d;
 - (void) setBorderColor:(id)aforEdge:(unsigned long long)b;
 - (unsigned long long) verticalAlignment;
 - (id) borderColorForEdge:(unsigned long long)a;
 - (void) setContentWidth:(double)atype:(unsigned long long)b;
 - (double) contentWidth;
 - (unsigned long long) contentWidthValueType;
 - (void) setWidth:(double)atype:(unsigned long long)bforLayer:(long long)c;
 - (void) setVerticalAlignment:(unsigned long long)a;
 - (void) setBackgroundColor:(id)a;
 - (void) setBorderColor:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForLayoutAtPoint:({CGPoint=dd})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})btextContainer:(id)ccharacterRange:({_NSRange=QQ})d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsRectForContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})btextContainer:(id)ccharacterRange:({_NSRange=QQ})d;
 - (id) _attributeDescription;
 - (id) backgroundColor;


@end
