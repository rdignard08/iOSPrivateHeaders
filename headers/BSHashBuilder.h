
@interface BSHashBuilder : NSObject {

    unsigned long long _hash;
}
 + (id) builder;

 - (unsigned long long) hash;
 - (id) init;
 - (id) appendUnsignedInteger:(unsigned long long)a;
 - (id) appendRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) appendBool:(BOOL)a;
 - (id) appendCGFloat:(double)a;
 - (id) appendDouble:(double)a;
 - (id) appendFloat:(float)a;
 - (void) _append:(unsigned long long)a;
 - (id) appendHashingBlocks:(@?)a;
 - (id) appendObject:(id)a;
 - (id) appendPointer:(^v)a;
 - (id) appendPoint:({CGPoint=dd})a;
 - (id) appendSize:({CGSize=dd})a;
 - (id) appendInteger:(long long)a;
 - (id) appendArray:(id)a;


@end
