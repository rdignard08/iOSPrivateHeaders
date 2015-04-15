
@interface BSHashBuilder : NSObject {

    Q _hash;
}
 + (id) builder;

 - (Q) hash;
 - (id) init;
 - (id) appendUnsignedInteger:(Q)a;
 - (id) appendRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) appendBool:(BOOL)a;
 - (id) appendCGFloat:(d)a;
 - (id) appendDouble:(d)a;
 - (id) appendFloat:(f)a;
 - (void) _append:(Q)a;
 - (id) appendHashingBlocks:(@?)a;
 - (id) appendObject:(id)a;
 - (id) appendPointer:(^v)a;
 - (id) appendPoint:({CGPoint=dd})a;
 - (id) appendSize:({CGSize=dd})a;
 - (id) appendInteger:(q)a;
 - (id) appendArray:(id)a;


@end
