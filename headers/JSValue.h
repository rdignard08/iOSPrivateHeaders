
@interface JSValue : NSObject {

    ^{OpaqueJSValue=} m_value;
    JSContext _context;
}
@property (atomic, assign, readonly) JSContext* context;
 + (id) valueWithNewArrayInContext:(id)a;
 + (id) valueWithJSValueRef:(^{OpaqueJSValue=})ainContext:(id)b;
 + (id) valueWithUndefinedInContext:(id)a;
 + (id) valueWithDouble:(double)ainContext:(id)b;
 + (id) valueWithObject:(id)ainContext:(id)b;
 + (id) valueWithBool:(BOOL)ainContext:(id)b;
 + (id) valueWithInt32:(int)ainContext:(id)b;
 + (id) valueWithUInt32:(unsigned int)ainContext:(id)b;
 + (id) valueWithNewObjectInContext:(id)a;
 + (id) valueWithNewRegularExpressionFromPattern:(id)aflags:(id)binContext:(id)c;
 + (id) valueWithNewErrorFromMessage:(id)ainContext:(id)b;
 + (id) valueWithNullInContext:(id)a;
 + (id) valueWithPoint:({CGPoint=dd})ainContext:(id)b;
 + (id) valueWithRange:({_NSRange=QQ})ainContext:(id)b;
 + (id) valueWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainContext:(id)b;
 + (id) valueWithSize:({CGSize=dd})ainContext:(id)b;
 + (SEL) selectorForStructToValue:(r*)a;
 + (SEL) selectorForValueToStruct:(r*)a;

 - (id) description;
 - (void) dealloc;
 - (void) setObject:(id)aatIndexedSubscript:(unsigned long long)b;
 - (id) init;
 - (id) valueForProperty:(id)a;
 - (void) setValue:(id)aforProperty:(id)b;
 - (id) objectForKeyedSubscript:(id)a;
 - (void) setObject:(id)aforKeyedSubscript:(id)b;
 - (id) objectAtIndexedSubscript:(unsigned long long)a;
 - (id) context;
 - (^{OpaqueJSValue=}) JSValueRef;
 - (id) toObject;
 - (double) toDouble;
 - (id) invokeMethod:(id)awithArguments:(id)b;
 - (id) toString;
 - (id) toObjectOfClass:(Class)a;
 - (BOOL) toBool;
 - (int) toInt32;
 - (unsigned int) toUInt32;
 - (id) toNumber;
 - (id) toDate;
 - (id) toArray;
 - (id) toDictionary;
 - (BOOL) deleteProperty:(id)a;
 - (BOOL) hasProperty:(id)a;
 - (void) defineProperty:(id)adescriptor:(id)b;
 - (id) valueAtIndex:(unsigned long long)a;
 - (void) setValue:(id)aatIndex:(unsigned long long)b;
 - (BOOL) isUndefined;
 - (BOOL) isNull;
 - (BOOL) isBoolean;
 - (BOOL) isNumber;
 - (BOOL) isString;
 - (BOOL) isObject;
 - (BOOL) isEqualToObject:(id)a;
 - (BOOL) isEqualWithTypeCoercionToObject:(id)a;
 - (BOOL) isInstanceOf:(id)a;
 - (id) callWithArguments:(id)a;
 - (id) constructWithArguments:(id)a;
 - ({CGPoint=dd}) toPoint;
 - ({CGSize=dd}) toSize;
 - ({_NSRange=QQ}) toRange;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) toRect;
 - (id) initWithValue:(^{OpaqueJSValue=})ainContext:(id)b;


@end
