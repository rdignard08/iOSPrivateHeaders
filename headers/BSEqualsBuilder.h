
@interface BSEqualsBuilder : NSObject {

    BOOL _equal;
}
 + (id) builderWithObject:(id)aofExpectedClass:(Class)b;
 + (id) builder;

 - (id) init;
 - (id) appendBool:(BOOL)a counterpart:(@?)b ;
 - (id) appendCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})a counterpart:(@?)b ;
 - (id) appendInteger:(long long)a counterpart:(@?)b ;
 - (id) appendEqualsBlocks:(@?)a ;
 - (id) appendObject:(id)a counterpart:(@?)b ;
 - (id) appendCGFloat:(double)a counterpart:(@?)b ;
 - (BOOL) isEqual;
 - (id) appendUnsignedInteger:(unsigned long long)a counterpart:(@?)b ;
 - (id) appendString:(id)a counterpart:(@?)b ;
 - (id) appendPointer:(^v)a counterpart:(@?)b ;
 - (id) appendArray:(id)a counterpart:(@?)b ;
 - (id) appendCGPoint:({CGPoint=dd})a counterpart:(@?)b ;
 - (id) appendCGSize:({CGSize=dd})a counterpart:(@?)b ;


@end
