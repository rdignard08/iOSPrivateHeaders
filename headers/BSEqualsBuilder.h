
@interface BSEqualsBuilder : NSObject {

    BOOL _equal;
}
 + (id) builderWithObject:(id)aofExpectedClass:(Class)b;
 + (id) builder;

 - (id) init;
 - (id) appendBool:(BOOL)acounterpart:(@?)b;
 - (id) appendCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})acounterpart:(@?)b;
 - (id) appendInteger:(long long)acounterpart:(@?)b;
 - (id) appendEqualsBlocks:(@?)a;
 - (id) appendObject:(id)acounterpart:(@?)b;
 - (id) appendCGFloat:(double)acounterpart:(@?)b;
 - (BOOL) isEqual;
 - (id) appendUnsignedInteger:(unsigned long long)acounterpart:(@?)b;
 - (id) appendString:(id)acounterpart:(@?)b;
 - (id) appendPointer:(^v)acounterpart:(@?)b;
 - (id) appendArray:(id)acounterpart:(@?)b;
 - (id) appendCGPoint:({CGPoint=dd})acounterpart:(@?)b;
 - (id) appendCGSize:({CGSize=dd})acounterpart:(@?)b;


@end
